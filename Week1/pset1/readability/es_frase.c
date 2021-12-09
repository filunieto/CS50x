#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Le damos un character y nos dice si es una letra. de momento parece que funciona


//int es_frase(char letra)
int main(void)
{

    char letra = get_char("introduce una letra :"); //input de funcion

    char frase[] = {'.','!','?'};

    int long_frase = 2;

    int posicion = 0;


    while (letra != frase[posicion] && posicion < long_frase)

    {
        posicion++;

        // printf("frase[%i]: %c \n, coontadors posicion: %i \n,  ", posicion, frase[posicion], posicion );

    }

    // printf("antes del else y el if frase[posicion]: %c \n y la letra %c \n " , frase[posicion], letra);

    if (letra == frase[posicion])
    {

    // printf("bucle if! es frase");
    return 1;

    }

    else
    {

    // printf("bucle else! no es frase");
    return 0;

    }


}

