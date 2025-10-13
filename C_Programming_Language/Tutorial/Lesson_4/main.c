/* BTK Akademi - C Programming Language */
/**
 * Quick Assign feature
 * C Programming Language
*/
#include <stdio.h>

int main()
{
    int i = 3;
    printf("%d\n",i);
    
    i += 5; 			// i = i + 5 	=> i = 3 + 5 	=> i = 8
    printf("%d\n",i);
    
    i -= 2; 			// i = i - 2 	=> i = 8 - 2 	=> i = 6
    printf("%d\n",i);
    
    i *= 4; 			// i = i * 4 	=> i = 6 * 4 	=> i = 24
    printf("%d\n",i);
    
    i /= 3; 			// i = i / 3 	=> i = 24 / 3 	=> i = 8
    printf("%d\n",i);
    
    return 0;
}
