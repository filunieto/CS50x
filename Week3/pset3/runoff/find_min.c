
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

int voter_count = 15; //máximo numero de votos

// int preferences[4][3] = {{1,2,0},{0,1,2},{2,1,0},{1,2,0}};//-.> borrar directamente


candidate candidates[candidate_count];

candidates[0].name = "Alice";
candidates[0].votes = 2;
candidates[0].eliminated = true;

candidates[1].name = "Bob";
candidates[1].votes = 0;
candidates[1].eliminated = true;

candidates[2].name = "Charly";
candidates[2].votes = 3;
candidates[2].eliminated = false;

candidates[3].name = "Dave";
candidates[3].votes = 5;
candidates[3].eliminated = false;

candidates[4].name = "Emma";
candidates[4].votes = 5;
candidates[4].eliminated = false;



//------------------datos inputs devuelve True o false


    int puntuacion_minima = voter_count;

    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes < puntuacion_minima && candidates[i].eliminated == false)
        {

            puntuacion_minima =  candidates[i].votes;

        }

    }
    printf(" la puntauacion minima para ser eliminado es de: %i \n", puntuacion_minima);
    return puntuacion_minima;

}