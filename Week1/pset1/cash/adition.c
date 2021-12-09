#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("x: ");

    int y = get_int("y: ");

    const int cuarto = 25;


    int numero_monedas = x / y;
    int resto = x % y;
    int numero_monedas25 = x / cuarto;

    printf("el resultado division: %f\n", (float)x / (float)y);
    printf("el cociente es : %i\n", numero_monedas );
    printf("el resto de la division  es : %i\n", resto );
    printf("el resultado division sin decimales: %i\n", x / y);

    printf("la suma del valor de monedas más 1: %i\n", numero_monedas + 1);
    printf("la suma del valor de monedas de 25 más 3: %i\n", numero_monedas25 + 3);











}