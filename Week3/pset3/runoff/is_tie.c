
#include <cs50.h>
#include <stdio.h>
#include <string.h>


typedef struct
{
    string name;
    int votes;
    bool eliminated;
}
candidate;




// print_winner

int main(void)
{


int candidate_count =  5 ;

int voter_count = 10; //máximo numero de votos

// int preferences[4][3] = {{1,2,0},{0,1,2},{2,1,0},{1,2,0}};//-.> borrar directamente


candidate candidates[candidate_count];

candidates[0].name = "Alice";
candidates[0].votes = 2;
candidates[0].eliminated = false;

candidates[1].name = "Bob";
candidates[1].votes = 2;
candidates[1].eliminated = true;

candidates[2].name = "Charly";
candidates[2].votes = 2;
candidates[2].eliminated = false;

candidates[3].name = "Dave";
candidates[3].votes = 2;
candidates[3].eliminated = true;

candidates[4].name = "Emma";
candidates[4].votes = 2;
candidates[4].eliminated = false;

//------------------datos inputs devuelve True o false

    int min = 2; //minimo numeor de votos para ser eliminado
    
 //-----------------------------------
 
 
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

        printf(" aquí saldriamos con un true porque ha habido empate de candidatos false  con la puntuiacion minima \n");
        return 0;
    }

    printf("hay %i candidatos empatados y %i candidatos eliminados \n",candidatos_empatados, candidatos_eliminados);

}