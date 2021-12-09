
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


int candidate_count =  3 ;

int voter_count = 7;

int preferences[4][3] = {{1,2,0},{0,1,2},{2,1,0},{1,2,0}};//-.> borrar directamente




candidate candidates[3];

candidates[0].name = "Alice";
candidates[0].votes = 3;
candidates[0].eliminated = false;

candidates[1].name = "Bob";
candidates[1].votes = 1;
candidates[1].eliminated = false;

candidates[2].name = "Jose";
candidates[2].votes = 3;
candidates[2].eliminated = false;

//------------------datos inputs devuelve True o false

    int mayoria_votos = voter_count / 2; //esto da un entero así que l acondiciondebe ser > que
    
    for (int i = 0; i < candidate_count ; i ++)
    
    {
        
        if (candidates[i].votes > mayoria_votos)
        {
            
            printf(" el candidato %s ha ganado\n",candidates[i].name);
            return true;
        }
        
        printf("siguiente candidato i+1 %i \n", i+1);
        
    }
    printf("No hay mayoria . Salimos! \n");
    return false;
    
    
}