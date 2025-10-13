/* BTK Akademi - C Programming Language */
/**
 * ++ Operation
 * C Programming Language
*/
#include <stdio.h>

int main()
{
	int i;
	
	i = 0;
	
	printf("%d\n", i);		// i = 0, print 0
	printf("%d\n", i++); 	// First of all print 0, then i = i + 1 => i = 0 + 1 = 1
	printf("%d\n", i);		// i = 1, print 1
	printf("%d\n", ++i);	// First of all i = i + 1 = 1 + 1 = 2, then print 2
	printf("%d\n", i);		// i = 2, print 2
    
    return 0;
}