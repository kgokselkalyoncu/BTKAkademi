/* BTK Akademi - C Programming Language */
/**
 * Conversion between variable types (Typecasting)
 * C Programming Language
*/
#include <stdio.h>

int main()
{
	int sayi1 = 23, sayi2 = 7;
        
    int tamsayi_bolme_sonucu;
    float gercel_bolme_sonucu_float;
    double gercel_bolme_sonucu_double;
    int gercel_bolme_sonucu_float_tamsayi;
    
    tamsayi_bolme_sonucu = sayi1 / sayi2;
    printf("Result Integer Div = %d\n", tamsayi_bolme_sonucu);
    
    gercel_bolme_sonucu_float = (float) sayi1 / sayi2;
    printf("Result Reel Div (float) = %.20f\n", gercel_bolme_sonucu_float);
    
    gercel_bolme_sonucu_double = (double) sayi1 / sayi2;
    printf("Result Reel Div (double) = %.20f\n", gercel_bolme_sonucu_double);
    
    gercel_bolme_sonucu_float_tamsayi = (int) gercel_bolme_sonucu_float;
    printf("Result Reel Div (float) convert to Integer = %d\n", gercel_bolme_sonucu_float_tamsayi);
    
    return 0;
}