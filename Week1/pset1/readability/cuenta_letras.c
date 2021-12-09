#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>


int es_letra(char letra);

// probar el programa. funciona !!

int main(void)
{


    string texto = get_string("introduce un texto :"); // convertir en  input




    int num_letras = 0;
    int tamaño_texto = strlen(texto);


    for (int i= 0; i < tamaño_texto; i++)
    {

       num_letras = num_letras + es_letra(texto[i]);

    }
    printf("NO letras: %i \n", num_letras);
    // return num_letras; ******* cambiar


}


int es_letra(char letra)
{

    // char letra = get_char("introduce una letra :"); input

    char Alfabeto[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    int long_alfabeto = 52;

    int posicion = 0;


    while (letra != Alfabeto[posicion] && posicion < 52)

    {
        posicion++;

    }


    if (letra == Alfabeto[posicion])
    {

    // printf("Es letra!");
    return 1;

    }
    else
    {
    // printf("NO Es letra!");
    return 0;
    }

}
