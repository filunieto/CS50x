#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max voters and candidates
#define MAX_VOTERS 100
#define MAX_CANDIDATES 9  //numero maximo de candidatos: Jose, Clara, Pepe,...

// preferences[i][j] is jth preference for voter i

int preferences[MAX_VOTERS][MAX_CANDIDATES]; // El votante i tendrá  en el orden j  de la lista al candidato Nº x

// La matriz tiene dimension Nº de votantes (i) x Nº de candidatos (j) (el primero de su lista que no esté elimindao (que sea false))

// Candidates have name, vote count, eliminated status
typedef struct
{
    string name;
    int votes;
    bool eliminated;
}
candidate;

// Array of candidates
candidate candidates[MAX_CANDIDATES];

// Numbers of voters and candidates
int voter_count;
int candidate_count;


// Function prototypes
bool vote(int voter, int rank, string name);
void tabulate(void);
bool print_winner(void);
int find_min(void);
bool is_tie(int min);
void eliminate(int min);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: runoff [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates : cuántos candidatos hay
    candidate_count = argc - 1; //Numeros  de candidatos que tenemos

    if (candidate_count > MAX_CANDIDATES)
    {
        printf("Maximum number of candidates is %i\n", MAX_CANDIDATES);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
        candidates[i].eliminated = false;
    }

    voter_count = get_int("Number of voters: ");  //cuantas perosnas van a votar . Maximo 100
    if (voter_count > MAX_VOTERS)
    {
        printf("Maximum number of voters is %i\n", MAX_VOTERS);
        return 3;
    }

    // Keep querying for votes
    for (int i = 0; i < voter_count; i++)
    {

        // Query for each rank
        for (int j = 0; j < candidate_count; j++)
        {
            string name = get_string("Rank %i: ", j + 1); // Vamos introduciendo  candidatos por orden que elijamos del 0 al numero candidate_count:
            // Para el usuario el primer rank  es 1, para el  codigo es 0

            // Record vote, unless it's invalid
            if (!vote(i, j, name))
            {
                printf("Invalid vote.\n");
                return 4;
            }
        }

        printf("\n");
    }

    // Keep holding runoffs until winner exists
    while (true)
    {
        // Calculate votes given remaining candidates
        tabulate();

        // Check if election has been won
        bool won = print_winner();
        if (won)
        {
            break;
        }

        // Eliminate last-place candidates
        int min = find_min();
        bool tie = is_tie(min);

        // If tie, everyone wins
        if (tie)
        {
            for (int i = 0; i < candidate_count; i++)
            {
                if (!candidates[i].eliminated)
                {
                    printf("%s\n", candidates[i].name);
                }
            }
            break;
        }

        // Eliminate anyone with minimum number of votes
        eliminate(min);

        // Reset vote counts back to zero
        for (int i = 0; i < candidate_count; i++)
        {
            candidates[i].votes = 0;
        }
    }
    return 0;
}

// Record preference if vote is valid
//Vamos construyendo la matriz de preferencias para votos válidos
bool vote(int voter, int rank, string name) //rango de candidatos rank de 0 a Ncandidatos por preferncia : 0 el más querido
{

    for (int j = 0; j < candidate_count; j++)
    {

        if (strcmp(candidates[j].name, name) == 0)
        {

              preferences[voter][rank]  = j ;
              return true;
        }
    }
    return false;
}



// Tabulate votes for non-eliminated candidates
void tabulate(void)
{
    for (int i = 0; i < voter_count; i++)
    {
        for (int j = 0; j < candidate_count; j++)
        {
            if (candidates[preferences[i][j]].eliminated == false)
            {
                candidates[preferences[i][j]].votes ++;
                break;
            }
        }
    }
    // TODO
    // return;
}


// Print the winner of the election, if there is one
bool print_winner(void)
{

    int mayoria_votos = voter_count / 2; //esto da un entero así que l acondiciondebe ser > que

    for (int i = 0; i < candidate_count ; i ++)

    {
        if (candidates[i].votes > mayoria_votos)
        {
            printf("%s\n", candidates[i].name);
            return true;
        }
    }
    return false;
}



// Return the minimum number of votes any remaining candidate has
int find_min(void)
{

    int puntuacion_minima = voter_count;

    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes < puntuacion_minima && candidates[i].eliminated == false)
        {
            puntuacion_minima =  candidates[i].votes;
        }
    }
    // printf(" la puntauacion minima para ser eliminado es de: %i \n", puntuacion_minima);
    return puntuacion_minima;
}



// Return true if the election is tied between all candidates, false otherwise
bool is_tie(int min)
{

    int candidatos_eliminados = 0;
    int candidatos_empatados = 0;

    for (int j = 0; j < candidate_count; j++)

    {
        if (candidates[j].eliminated == true)
        {
            candidatos_eliminados++;
        }

    }

    for (int i = 0; i < candidate_count; i++ )
    {

        if (candidates[i].votes == min && candidates[i].eliminated == false)
        {
            candidatos_empatados++;
        }
    }

    if (candidatos_empatados == candidate_count - candidatos_eliminados)
    {

        // printf(" aquí saldriamos con un true porque ha habido empate de candidatos false  con la puntuiacion minima \n");
        return true;
    }

    // printf("hay %i candidatos empatados y %i candidatos eliminados \n",candidatos_empatados, candidatos_eliminados);
    return false;








    // TODO
    return false;
}

// Eliminate the candidate (or candidates) in last place
void eliminate(int min)
{

    for (int i = 0; i < candidate_count; i++)
    {

        if (candidates[i].votes <= min)
        {
            candidates[i].eliminated = true;

        }

    }

}
