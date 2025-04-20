/* BTK Akademi - C Programming Language */
/**
 * Assigning values ??to a variable in different number systems
 * C Programming Language
*/
#include <stdio.h>

int main()
{
    int a=35; 			// In base 10 (decimal)
    int b=0b00100011; 	// In base 2 (binary)
    int c=0x23;			// In base 16 (hexadecimal)
    
    printf("a= %d\n", a);
    printf("b= %d\n", b);
    printf("c= %d\n", c);
    
    return 0;
}