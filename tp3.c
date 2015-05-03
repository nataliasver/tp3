#include <stdio.h>

float getcelcius (int);

int main (void)
{
    const int MAX = 300;
    const int MIN = 0;
    const int DIF = 20;
    int fahr;
            
    printf ("|Fahren.|Celsius|\n");
    printf ("-------------------\n");
    for (fahr = MIN; fahr <= MAX; fahr += DIF )
    {
        
        printf("|%5d\t| %3.1f\n", fahr, getcelcius(fahr));
    }
    return 0;
    
}

float getcelcius (int fahr)
{
    return 5.0/9.0*(fahr - 32.0);        
};