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


// int candidate_count =  3 ;

// int preferences[4][3]; //-.> borrar directamente



// candidate candidates[3];

// candidates[0].name = "Alice";
// candidates[0].votes = 2;
// candidates[0].eliminated = false;

// candidates[1].name = "Bob";
// candidates[1].votes = 1;
// candidates[1].eliminated = false;

// candidates[2].name = "Jose";
// candidates[2].votes = 0;
// candidates[2].eliminated = false;




//     int voter = 2;  //el numero de votante que está votando
//     int rank = 3;  //preferncia de candidato 0 =  el más querido
//     string name = "Alice" ;

    //---------------inputs arriba


    for (int j = 0; j < candidate_count; j++)
    {

        if (strcmp(candidates[j].name, name) == 0)
        {

              preferences[voter][rank]  = j ; //

            //   printf("el candidato :%s (o numero %i), esta en la matriz prefernce [%i] ,[%i] \n",candidates[j].name, j, voter, rank );
              return true;

        }



    }
    // printf("estamos fuera \n y  \n ");
    return false;

}