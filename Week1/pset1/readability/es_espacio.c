#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Le damos un character y nos dice si es una espacio. 


// //int es_esapcio
// int main(void)
// {

//     char letra = get_char("introduce una letra :"); //input de funcion

//     char espacio = ' ';
    

//     if (letra == espacio)
//     {

//     // printf("Es esacio ergo palabra!");
//     return 1;

//     }
//     else
//     {

//     // printf("NO Es espaico!");
//     return 0;

//     }
// }



//int es_esapcio
int es_espacio(char letra)
{

    // char letra = get_char("introduce una letra :"); //input de funcion

    char espacio = ' ';
    

    if (letra == espacio)
    {

    // printf("Es esacio ergo palabra!");
    return 1;

    }
    else
    {

    // printf("NO Es espaico!");
    return 0;

    }
}

