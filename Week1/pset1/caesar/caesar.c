#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include<math.h>
#include <stdlib.h>


int convierte_letra(int key, char letra);
int codifica(int key, string texto);



int main(int argc, string argv[])


{
    if (argc == 2)

    {
        // printf("ok\n");

        int l = strlen(argv[1]);
        int i = 0;

        while (isdigit(argv[1][i]))
        {

            i++;
            // printf("el valor de i en el while %i \n", i);
        }

        if (i == l) // ha verificado que la entrada es un numero
        {

            int key = atoi(argv[1]);

            string texto = get_string("Palabara o texto  a codificar: "); //pide la palabara o texto  para codificar

            codifica(key, texto);

            // char texto_codificado [strlen(texto)];   //declaramos variable y le damos la longitud del texto a codificar. ene sta declarcacion se pueede leiar ***

            // texto_codificado = codifica(key, texto);    //como imputs a la funiocn codifica pasamos la key numérica ya transformada en int   y el texto a a codificar


            // printf("%d\n", codifica(key, texto));


        }
        else //la entrada no es un numero
        {
            printf("Usage: ./caesar key\n");
            return  1;

        }


        // printf(" primer argumeto: Función --> : %s \n y segundo argumento key,%s \n y un caracter de la funcion %c \n  ", argv[0], argv[1], argv[0][1]);

    }

    else // ha introoducido más argumentos de la cuenta o ninguno
    {
        printf("Usage: ./caesar key\n");
        return  1;

    }
    
}


int codifica(int key, string texto)

{


    // string texto = get_string("Palabara o texto  a codificar: ");
    // int key = get_int("numero key  a empieza con 1: ");


    int l = strlen(texto);
    char texto_codificado [l] ; 
    //Esta variablel almacena el texto codificado  la jodí con el tipo de texto en la declaracion ******** en vez de char puse string


    for (int i = 0; i < l; i++)
    {

        if (isalpha(texto[i])) //si es texto aplicamos l aformula
        {

            texto_codificado[i] = convierte_letra(key, texto[i]);

        }



        else //sumamos sin tocar nada
        {

            texto_codificado [i] = texto [i];


        }


    }
    printf("ciphertext: %s\n", texto_codificado);
    return  1;

}


int convierte_letra(int key, char letra)
{


    // char letra = get_char("daame letra ");
    // int key = get_int("numero key  a empieza con 1: ");

    char Alfabeto_mayus[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char Alfabeto_minus[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
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

