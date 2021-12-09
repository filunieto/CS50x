#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

    // int POINTS[] = {1, 3, 3, 2, 5};



// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;



// Array of candidates : El diccionario se llamaa candidates y tendrá tamntos elementos como candidatos
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);  // la funcion no puede tnerer parametros. en ese caso parece que no reconoce las variables locales/gloabales
// int mayor_voto(int l, int votos[]);


int main(int argc, string argv[])
{
    // Check for invalid usage . No memtemos ningún nombre en la función
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates: Numero de candidatos ( numero de strings introducidos en la función main)
    candidate_count = argc - 1;
    int array_votos [candidate_count];


    if (candidate_count > MAX) //hemos metido más de 9 caniddatos
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1]; //vamos asignando los nombre en el diccionario que nos pasan por paraetro
        candidates[i].votes = 0; //iniciamos con 0 votos para cada candidato
    }


    int voter_count = get_int("Number of voters: "); //Cuantos votos en total hemos recogido

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: "); //damos un voto al candidatyo "name"

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    for (int i = 0; i < voter_count; i++ )  //esto igual lo puedo quitar
    {
        array_votos[i] = candidates[i].votes;

    }


    // int maximos_votos = mayor_voto(candidate_count, array_votos);


    print_winner();




}


// Update vote totals given a new vote
bool vote(string voto_acandidato)
{

    // int l = candidate_count;
    // candidate candidates[l];
    // candidates[1].name = "Bob";
    // candidates[1].votes = 0;
    // int array_votos [candidate_count];


    for (int i = 0; i < candidate_count; i++ )
    {
        if (strcmp(candidates[i].name, voto_acandidato) == 0)
        {
            candidates[i].votes++;
            // array_votos[i] = candidates[i].votes;

            // printf("el candidato :%s ya tiene %i voto. (siempre tiene que salir 1) \n ",candidates[i].name, candidates[i].votes);
            return true; //en la funcion de verdad retornamos un true
        }


        //igual hay que añadir una funcion si el candidato no sale en la lista .cuando no sale lo invalida de momento
    }
    // printf("estamos fuera \n y  \n ");
    return false;    // return false;
}





// Print the winner (or winners) of the election
void print_winner(void)
{

    int mayor = candidates[0].votes;

    for (int i = 0; i < candidate_count; i++)
    {
        // printf(" mayor: %i y voyos de i %i\n", mayor, votos[i]);

        if (mayor < candidates[i].votes)
        {
            mayor = candidates[i].votes;

        }
    }


    for (int i = 0; i < candidate_count; i++)
    {


        if (candidates[i].votes == mayor)

        {

            printf("%s\n", candidates[i].name);

        }

    }
}


// int mayor_voto(int l, int votos[])
// {

//     // int l = 5; //número de candidatos
//     // int votos[] = {1, 2, 8, 8, 10}; // input a la funcion y la l también

//     int mayor = votos[0];

//     for (int i = 0; i < l; i++)
//     {
//         // printf(" mayor: %i y voyos de i %i\n", mayor, votos[i]);

//         if (mayor < votos[i])
//         {
//             mayor = votos[i];

//         }
//     }
// //   printf(" a ver si esto se ejecuta: El numero mayor es: %i\n", mayor);
//   return mayor;
// }