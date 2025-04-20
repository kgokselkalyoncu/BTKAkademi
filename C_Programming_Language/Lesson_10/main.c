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
	
	int benimDizim[] = {1,2,3,4,5,6};
	int boyut = sizeof(benimDizim) / sizeof(benimDizim[0]);
    
    /* number sqrt calculations */
    karekok = sqrt(sayi);
    
    printf("%.2lf number sqrt = %.2lf", sayi, karekok);
    
    return 0;
}