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


//rellenamos la matriz: int preferences[MAX_VOTERS][MAX_CANDIDATES];
int main(void)
{

int candidate_count =  3 ;

int voter_count = 4;

int preferences[4][3] = {{1,2,0},{0,1,2},{2,1,0},{1,2,0}};//-.> borrar directamente




candidate candidates[3];

candidates[0].name = "Alice";
candidates[0].votes = 3;
candidates[0].eliminated = true;

candidates[1].name = "Bob";
candidates[1].votes = 1;
candidates[1].eliminated = true;

candidates[2].name = "Jose";
candidates[2].votes = 0;
candidates[2].eliminated = false;




    for (int i = 0; i < voter_count; i++)
    {

        for (int j = 0; j < candidate_count; j++)
        {

            if (candidates[preferences[i][j]].eliminated == false)
            {
                candidates[preferences[i][j]].votes ++;
                printf("el votante i %i cuyo  orden de preferncia válido de voto j= %i. cuyo nombre es : %s y este tiene un total de %i votos\n", i, j, candidates[preferences[i][j]].name, candidates[preferences[i][j]].votes);
                break;
            }
            printf(" el votante %i No ha encontrado al candidato %s, en el orden j:%i veamos el siguiente rango de votación j+1: %i \n",i, candidates[preferences[i][j]].name, j, j+1);

        }

        printf(" entre ambos bucles for: aquí el votante es el numero  %i  y cambiamos de votante a 1+i:  %i \n", i, i+1);

    }

    printf("fuera de ambos for ");
    // for (int m = 0; m < candidate_count; m++)
    // {
    //     printf(" el ultimo print f en el nuevo bucleel candidato cuyo nombre es : %s tiene  %i votos\n", candidates[m].name, candidates[m].votes);


    // }



}



            // if (candidates[preferences[i][j]].eliminated == false)
            // {
            //     candidates[preferences[i][j]].votes++;
            //     printf("el votante i %i da al candidato j %i. y este tiene un total de %i votos\n", i, j, candidates[preferences[i][j]].votes);
            //     return 0;


            // }
            // else
            // {
            //     return 0;

            // }
