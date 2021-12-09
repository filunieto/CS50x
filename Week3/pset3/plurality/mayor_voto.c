#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

    int l = 5; //número de candidatos
    int votos[] = {1, 2, 8, 8, 10}; // input a la funcion y la l también

    int mayor = votos[0];

    for (int i = 0; i < l; i++)
    {

        if(mayor < votos[i])
        {
            mayor = votos[i];

        }

    }

//   printf("El numero mayor es: %i\n", mayor);
   return 0;


}