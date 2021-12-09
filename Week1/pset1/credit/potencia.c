#include <stdio.h>
#include <cs50.h>



int pow2(int base, int expon);


int main(void)
{
    
    
    long m ;
    
    for (int i = 0; i < 5; i++)
    {
        
        m = pow2(2, i);
        printf(" resultado: %li\n ", m);
        
    }

    
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