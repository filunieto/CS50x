
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
candidates[0].eliminated = false;

candidates[1].name = "Bob";
candidates[1].votes = 5;
candidates[1].eliminated = false;

candidates[2].name = "Charly";
candidates[2].votes = 3;
candidates[2].eliminated = false;

candidates[3].name = "Dave";
candidates[3].votes = 0;
candidates[3].eliminated = true;

candidates[4].name = "Emma";
candidates[4].votes = 5;
candidates[4].eliminated = false;

//------------------datos inputs devuelve True o false

    int min = 2; //minimo numeor de votos para ser eliminado

    for (int i = 0; i < candidate_count; i++)
    {
        printf("vamos con el candidato  %s\n", candidates[i].name);

        if (candidates[i].votes <= min)
        {
            candidates[i].eliminated = true;
            printf(" el candidato %s está eliminado\n", candidates[i].name);

        }

    }

}