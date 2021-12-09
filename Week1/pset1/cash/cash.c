#include <stdio.h>
#include <cs50.h>
#include <math.h>

float cambio(void);
int cambio_covertido(float n);


int main(void)
{


// no repetir nombres de variables en la funciones externas desde esta funcion
    const int veinticinco = 25;
    const int diez = 10;
    const int cinco = 5;
    const int uno = 1;


    float n = cambio();

    int cambio_redondeado = cambio_covertido(n);


    int resto25 = cambio_redondeado % veinticinco;
    int monedas25 = cambio_redondeado / veinticinco;
    int resto = cambio_redondeado - monedas25 * veinticinco;

    // printf("las variables por resto25 %i, monedas25: %i y resto %i \n", resto25, monedas25, resto);

    if (resto25 == 0)
    {
        printf("%i\n", monedas25);

    }
    // dentro de este else anidor otro if y otro else con las mimsas operaciones si hay guevos
    else
    {
    int resto10 = resto % diez;
    int monedas10 = resto / diez;
    int resto2 = resto - monedas10 * diez;

    if (resto10 == 0)
    {
    printf("%i\n", monedas25 + monedas10);


    }
    else
    {
    int resto5 = resto2 % cinco;
    int monedas5 = resto2 / cinco;
    int resto3 = resto2 - monedas10 * cinco;

    if (resto5 == 0)
    {
        printf("%i\n", monedas25 + monedas10 + monedas5);

    }

    else
    {
    int resto1 = resto3 % uno;
    int monedas1 = resto3 / uno;
    int resto4 = resto3 - monedas5 * uno;

    if (resto1 == 0)
    {
        printf("%i\n", monedas25 + monedas10 + monedas5 + monedas1);

    }

    }

    }
    }
    }

float cambio(void)
{

    float cantidad_cambio;
    do
    {
        cantidad_cambio = get_float("Change owed: ");
    }
    // si es necesario añadimos un ||
    while (cantidad_cambio < 0);
    return cantidad_cambio;
}


int cambio_covertido(float f)
{
    int cambio_covertido = round(f * 100);
    return cambio_covertido;

}