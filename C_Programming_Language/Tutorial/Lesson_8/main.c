/* BTK Akademi - C Programming Language */
/**
 * Centimeter, meter and kilometer unit conversion
 * C Programming Language
*/
#include <stdio.h>

int main()
{
	float cm, metre, km;
	
	/* Length type centimetre */
	printf("Please Enter Length (cm): ");
	scanf("%f", &cm);
    
    /* Convert Operations */
    metre = cm / 100.0;
    km = cm / 100000.0;
    
    printf("Length (m) = %.2f m \n", metre);
    printf("Length (km) = %.2f km \n", km);
        
    return 0;
}