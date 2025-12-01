#include <stdio.h>

int main(void)
{
    int a = 16;
    int b = 3;
    
    printf("=== Opérateurs Arithmétiques ===\n\n");
    
    // 1. Addition
    printf("a + b = %d + %d = %d\n", a, b, a + b);
    
    // 2. Soustraction
    printf("a - b = %d - %d = %d\n", a, b, a - b);
    
    // 3. Multiplication
    printf("a * b = %d * %d = %d\n", a, b, a * b);
    
    // 4. Division
    printf("a / b = %d / %d = %d\n", a, b, a / b);
    
    // 5. Modulo (reste de la division)
    printf("a %% b = %d %% %d = %d\n", a, b, a % b);
    
    printf("\n=== Opérateurs de Comparaison ===\n\n");
    
    // 6. Test d'égalité
    printf("a == b : %d == %d -> %d (booléen)\n", a, b, a == b);
    
    // 7. Test de supériorité
    printf("a > b  : %d > %d -> %d (booléen)\n", a, b, a > b);
    
    printf("\nNote : 0 = faux (false), 1 = vrai (true)\n");
    
    return 0;
}
