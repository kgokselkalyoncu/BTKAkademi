/* BTK Akademi - C Programming Language */
/**
 * Basic Math Operations
 * C Programming Language
*/
#include <stdio.h>

int main()
{
    int sayi1, sayi2;
    int toplam, fark, carpim, mod;
    float bolum;

    /**
     * User enter two numbers
    */
    printf("Please enter two numbers: ");
    scanf("%d%d", &sayi1, &sayi2);
    
    /**
     * All Math operations
    */
    
    toplam = sayi1 + sayi2;
    fark = sayi1 - sayi2;
    carpim = sayi1 * sayi2;
    bolum = (float)sayi1 / sayi2;
    mod = sayi1 % sayi2;
    
    /**
     * Results print
    */
    printf("Sum = %d\n", toplam);
    printf("Sub = %d\n", fark);
    printf("Mult = %d\n", carpim);
    printf("Div = %f\n", bolum);
    printf("Mod = %d\n", mod);
    
    return 0;
}
