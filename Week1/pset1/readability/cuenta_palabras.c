#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>


int es_espacio(char letra);


// numero de palabras =  número de espacios
int main(void)
{

    string texto = get_string("introduce un texto :"); // input


    int num_palabras = 1;
    int tamaño_texto = strlen(texto);

    for (int i= 0; i < tamaño_texto; i++)
    {

       num_palabras = num_palabras + es_espacio(texto[i]);

    }
    // printf("num_palabras: %i \n", num_palabras );
    return num_palabras;

}




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
