/* BTK Akademi - C Programming Language */
/**
 * Power/exponent calculations
 * C Programming Language
*/
#include <stdio.h>
#include <math.h> // for pow() function

int main()
{
	double sayi, karekok;
	
	/* Get sqrt numbers from user */
	printf("Enter sqrt number:");
	scanf("%lf", &sayi);
	
    
    /* number sqrt calculations */
    karekok = sqrt(sayi);
    
    printf("%.2lf number sqrt = %.2lf", sayi, karekok);
    
    return 0;
}