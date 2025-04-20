/* BTK Akademi - C Programming Language */
/**
 * Power/exponent calculations
 * C Programming Language
*/
#include <stdio.h>
#include <math.h> // for pow() function

int main()
{
	double taban, kuvvet, sonuc;
	
	/* Get two numbers from user */
	printf("Enter base value:");
	scanf("%lf", &taban);
	printf("Enter power value:");
	scanf("%lf", &kuvvet);
    
    /* base^power value calculations */
    sonuc = pow(taban, kuvvet);
    
    printf("%.2lf ^ %.2lf = %.2lf", taban, kuvvet, sonuc);
    
    return 0;
}