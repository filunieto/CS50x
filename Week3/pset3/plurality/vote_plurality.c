#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    int votes;
}
candidate;






int main(void)
{


    int l = 3;
    candidate candidates[l];

    candidates[0].name = "Alice";
    candidates[0].votes = 2;

    candidates[1].name = "Bob";
    candidates[1].votes = 3;

    candidates[2].name = "Jose";
    candidates[2].votes = 5;

    int array_votos [3];

    printf("un voto de array_votos %i voto. \n ",array_votos [1]);



    string voto_acandidato = get_string("Vote: "); //damos un voto al candidato "name"



    for (int i = 0; i < l; i++ )
    {
        if (strcmp(candidates[i].name, voto_acandidato) == 0)
        {
            candidates[i].votes++;

            array_votos [i] = candidates[i].votes;


            printf("el candidato :%s ya tiene  voto. y el array del voto %i \n ",candidates[i].name, array_votos [i] );
            // return 0 ; //en la funcion de verdad retornamos un true

        }

    }
    printf("estamos fuera \n y  \n ");
    // return 1;


}