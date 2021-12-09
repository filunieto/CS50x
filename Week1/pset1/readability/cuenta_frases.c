#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>


int es_frase(char letra);


// numero de frases  =  número de caracteres --> . or a ! or a ?
int main(void)
{

    string texto = get_string("introduce un texto :"); // input


    int num_frases = 0;
    int tamaño_texto = strlen(texto);

    for (int i= 0; i < tamaño_texto; i++)
    {

       num_frases = num_frases + es_frase(texto[i]);

    }
    printf("num_palabras: %i \n", num_frases );
    return num_frases;

}


int es_frase(char letra)
{

    // char letra = get_char("introduce una letra :"); //input de funcion

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

