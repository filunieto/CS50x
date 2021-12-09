#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    string texto = get_string("Palabara o texto  a codificar: ");
    int i = atoi(texto);
    printf("convwersion de numero  texto a cifras %i \n", i);





    char c = get_char("Input: ");
    if (isdigit(c))
    {
        printf("Your input is a digit: Lo representamos  como ASCI %i y letra %c  .\n", c, c);

        // si escribimos 9 esta es lo que pone el printf: Your input is a digit: Lo representamos  como ASCI 57 y letra 9  .



    }
    else
    {
        printf("Your input is not a digit.\n");
    }
}