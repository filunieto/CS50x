#include <stdio.h>
#include <cs50.h>
#include <math.h> //esta igual habría que quiitarla


// escribimos aquí las funciones



int checksum(long l);
int recuento_cifras(long o);
int pow2(int base, int expon);
int separa_num_imp(int longitud, long tarjeta);
int separa_num_par(int longitud, long tarjeta);
int suma_cifras_impar(int longitud, long tarjeta);
int suma_cifras_par(int longitud, long tarjeta);
int comienzo_tarjeta(int longitud, long tarjeta);




int main(void)

{
    long l = get_long("dame un número largo: ");
    int longitud = recuento_cifras(l);

    // int checksum_ok = checksum(l);

    // int comienzo = comienzo_tarjeta(longitud,l);



    // printf("verificamos parametros checksum de l: %i \n, la longitud %i \n, y el comienzo_tarjeta(longitud,l):%i \n . or ultimo el numero de l atarjeta %li \n  ", checksum_ok, longitud, comienzo, l);





    if (checksum(l) && (longitud == 15) && ((comienzo_tarjeta(longitud,l)) == 34 ||  (comienzo_tarjeta(longitud,l)) == 37))
    {
        printf("AMEX\n");
    }

    else if (checksum(l) && ((longitud == 13) || (longitud == 16)) && (((comienzo_tarjeta(longitud,l) / 10) % 10) == 4 ))
    {
        printf("VISA\n");
    }

    else if (checksum(l) && (longitud == 16) && ((comienzo_tarjeta(longitud,l)) == 51 || (comienzo_tarjeta(longitud,l)) == 52 || (comienzo_tarjeta(longitud,l)) == 53 || (comienzo_tarjeta(longitud,l)) == 54 || (comienzo_tarjeta(longitud,l)) == 55 ))
    {
        printf("MASTERCARD\n");
    }

    else
    {
        printf("INVALID\n");
    }


}


int checksum(long l)
{

    int longitud = recuento_cifras(l);

    long num_impar = separa_num_imp(longitud, l);  //nuevo numero con las cifras impares
    long num_par = separa_num_par(longitud, l); //nuevo numero con las cifras pares

    int longitud_impar = recuento_cifras(num_impar); //nueva tamaó de numero
    int longitud_par = recuento_cifras(num_par);

    int total_cifras_impar = suma_cifras_impar(longitud_impar, num_impar);
    int total_cifras_par = suma_cifras_par(longitud_par, num_par);

    int total_check = total_cifras_impar + total_cifras_par;

    if(total_check % 10 == 0)
    {
       return 1;  //NO SE QUÉ DEVOLVER ???? NI AQUI NI EN EL 0
    }
    else
    {
       return 0;
    }

}


int recuento_cifras(long o)

{
    int tamagno = 0;

    do
    {
        o = o / 10;
        tamagno++;
    }
    while (o != 0);
    return tamagno;
}


int pow2(int base, int expon)
{

    long valor_potencia = 1;

    for(int i = 0; i < expon; i++)
    {

        valor_potencia = valor_potencia * base;

    }
    return valor_potencia;

}



int separa_num_imp(int longitud, long tarjeta)
{
        // // ** estos inputs fuera
    // int longitud = 9;
    // long tarjeta = 954406145;

    long num_impares = 0;
    // long num_pares = 0;
    int n = 0;
    long resto;

    do
    {
        int cifra = tarjeta % 10; //aislamos  la cifra
        tarjeta = tarjeta / 100 ; //vamos con la siguiente cifra impar

        num_impares = num_impares + cifra * pow(10, n);  // **** prescindir de  esta función vamos con la siguiente cifra impar
        n++;
        longitud -= 2;

    }
    while (longitud > 0);
    return num_impares;
}


int separa_num_par(int longitud, long tarjeta)
{
    // int longitud = 10; esto lo hemos sustituido como inputs de la función
    // long tarjeta = 3324406145;

    long num_pares = 0;
    int n = 0;
    long resto;
    long tarjeta_par = tarjeta / 10;
    int longitud_par = longitud - 1;

    do
    {
        int cifra = tarjeta_par % 10; //aislamos  la cifra
        tarjeta_par = tarjeta_par / 100 ; //vamos con la siguiente cifra impar

        num_pares = num_pares + cifra * pow(10, n);
        n++;
        longitud_par -= 2;

    }
    while (longitud_par > 0);
    return num_pares;

}


int suma_cifras_impar(int longitud, long tarjeta)
{

    int sum_cifra = 0;

    do
    {
        int cifra = tarjeta % 10; //aislamos  la cifra
        tarjeta = tarjeta / 10; // seguimos con el siguiente núumero menos la última cifra
        sum_cifra = sum_cifra + cifra; //vamos sumando valores de cifras y acumulando
        longitud --;

    }
    while (longitud > 0);
    return sum_cifra;

}

int suma_cifras_par(int longitud, long tarjeta)
{

    int sum_cifra = 0;

    do
    {
        int cifra = tarjeta % 10; //aislamos  la cifra
        tarjeta = tarjeta / 10; // seguimos con el siguiente núumero menos la última cifra
        cifra = cifra *2 ;
        if (cifra >= 10)
        {
             sum_cifra = sum_cifra + suma_cifras_impar(2, (long)cifra); //aquí está el quid  y cuidado con los inputs CUIDAIDO!!!**************
        }
        else
        {

            sum_cifra = sum_cifra + cifra;
        }
        longitud --;          //vamos sumando valores de cifras y acumulando
    }
    while (longitud > 0);
    return sum_cifra;

}


int comienzo_tarjeta(int longitud, long tarjeta)
{


    long n1 = pow(10, (longitud - 1));
    long n2 = pow(10, (longitud - 2));



    int cifra1 = tarjeta / n1  % 10; //aislamos  la cifra 1º
    int cifra2 = tarjeta / n2 % 10; //aislamos  la cifra 2º

    int cifras2 = cifra1 * 10 + cifra2;

    return cifras2;

}

