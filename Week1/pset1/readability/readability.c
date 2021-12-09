#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>



int cuenta_letras(string texto);
int es_letra(char letra);

int cuenta_palabras(string texto);
int es_espacio(char letra);


int cuenta_frases(string texto);
int es_frase(char letra);


int main(void)
{


    string texto = get_string("introduce un texto :");

    int l =  cuenta_letras(texto);

    int p = cuenta_palabras(texto);

    int f = cuenta_frases(texto);



    int L = l * 100 / p ;

    int S = f * 100 / p ;




    float  index = 0.0588 * L - 0.296 * S - 15.8;

    int grado = round(index);

    // printf("50.99 redondeado con floor es: %0.0f\n", floor(index));

    if (grado < 1 )
    {

        printf("Before Grade 1");
    }
    else if (grado >= 16 )

    {
        printf("Grade 16+");

    }

    // else if (1 < grado < 16 )

    // {
    //     printf("Grade %i\n",grado);

    // }

    else
    {

       printf("Grade %i\n", grado);
    }

    // printf("l  %i \n y p %i \n, f %i \n, L %i \n ,S %i \n ,INDEX %f \n , grado %i \n  " , l, p, f, L, S, index, grado);




}




// numero de letras =  compara con el subcoo0njunto de letras

int cuenta_letras(string texto)
{


    // string texto = get_string("introduce un texto :"); // convertir en  input




    int num_letras = 0;
    int tamaño_texto = strlen(texto);


    for (int i= 0; i < tamaño_texto; i++)
    {

       num_letras = num_letras + es_letra(texto[i]);

    }
    // printf("NO letras: %i \n", num_letras);
    return num_letras;


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




// numero de palabras =  número de espacios
int cuenta_palabras(string texto)
{

    // string texto = get_string("introduce un texto :"); // input


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


// numero de frases  =  número de caracteres --> . or a ! or a ?
int cuenta_frases(string texto)
{

    // string texto = get_string("introduce un texto :"); // input


    int num_frases = 0;
    int tamaño_texto = strlen(texto);

    for (int i= 0; i < tamaño_texto; i++)
    {

       num_frases = num_frases + es_frase(texto[i]);

    }
    // printf("num_palabras: %i \n", num_frases );
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

