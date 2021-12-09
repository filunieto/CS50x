#include <stdio.h>
#include <cs50.h>


int main(void)
{
    
    int longitud = 7;
    long tarjeta = 4406381;
    
    int sum_cifra_impar = 0;
    int sum_cifra_par = 0;
    
    
    do
    {
        
        // para los impares
        int cifra_impar = tarjeta % 10; //aislamos  la cifra
        long resto = tarjeta / 10; // seguimos con el siguiente núumero menos la última cifra
        sum_cifra_impar = sum_cifra_impar + cifra_impar //vamos sumando cifras imares 
        
        // para los pares, hay que tener en cuenta le doble productp
        int cifra_par = resto % 10; 
        resto = resto / 10;
        
        if 
        {
            cifra_par >= 5;
            
        }
        
        elif
        {
            
        }
        
        
        sum_cifra_par = sum_cifra_par + cifra_par
        
        // aqui hay que aplicar la doble cifra sum_cifra_par = sum_cifra_par + cifra_par
    }
    while()
    
}