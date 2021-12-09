#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include<math.h>
#include <stdlib.h>


int convierte_letra(int key, char letra);

//funcion
// int codifica.c(int key, string texto)

int main(void)

{


    string texto = get_string("Palabara o texto  a codificar: ");
    int key = get_int("numero key  a empieza con 1: ");


    int l = strlen(texto);
    char texto_codificado [l] ;  //Esta variablel almacena el texto codificado  la jodí con el tipo de texto en la declaracion ******** en vez de char puse string


    for (int i = 0; i < l; i++)
    {

        if (isalpha(texto[i])) //si es texto aplicamos l aformula
        {

            texto_codificado[i] = convierte_letra(key, texto[i]);

            // printf(" letra codificada  %c\n y letra sin codificar %c\n ", texto_codificado[i], texto[i]);
            // return  texto_codificado[i];
        }



        else //sumamos sin tocar nada
        {

            texto_codificado [i] = texto [i];

            // printf(" letra codificada  %c\n y letra sin codificar %c\n ", texto_codificado[i], texto [i]);

            // return  texto_codificado[i];
        }


    }
    printf("texto codificado %s\n y el tipo de variable %lu \n ", texto_codificado, sizeof(texto_codificado));
    // return  texto_codificado;



}


int convierte_letra(int key, char letra)
{


    // char letra = get_char("daame letra ");
    // int key = get_int("numero key  a empieza con 1: ");

    char Alfabeto_mayus[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char Alfabeto_minus[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int POINTS[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};

    int i = 0;
    int letra_cifrd;

    if (isupper(letra))

    {
        while (letra != Alfabeto_mayus[i])
        {
            i++;
        }

        letra_cifrd = (POINTS[i] + key) % 26;
        // printf(" letra cifrada en numero %i \n , kletra cifrada en letra %c \n, letra_cifrd ", letra_cifrd, Alfabeto_mayus[letra_cifrd]);

        return Alfabeto_mayus[letra_cifrd];

    }

    else

    {

        while (letra != Alfabeto_minus[i])
        {
            i++;
        }

        letra_cifrd = (POINTS[i] + key) % 26;
        // printf(" letra cifrada en numero %i \n , kletra cifrada en letra %c \n, letra_cifrd ", letra_cifrd, Alfabeto_minus[letra_cifrd]);

        return Alfabeto_minus[letra_cifrd];


    }


}

