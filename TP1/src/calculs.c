#include <stdio.h>

int main(void)
{
    int num1, num2;
    char op;
    

    num1 = 16;
    num2 = 3;
    op = '+';  
    
    printf("=== Calculatrice avec Switch ===\n");
    printf("num1 = %d, num2 = %d, opérateur = '%c'\n\n", num1, num2, op);
    
    switch(op)
    {
        case '+':
            printf("Addition : %d + %d = %d\n", num1, num2, num1 + num2);
            break;
            
        case '-':
            printf("Soustraction : %d - %d = %d\n", num1, num2, num1 - num2);
            break;
            
        case '*':
            printf("Multiplication : %d * %d = %d\n", num1, num2, num1 * num2);
            break;
            
        case '/':
            if (num2 != 0) {
                printf("Division : %d / %d = %d\n", num1, num2, num1 / num2);
            } else {
                printf("Erreur : Division par zéro impossible!\n");
            }
            break;
            
        case '%':
            if (num2 != 0) {
                printf("Modulo : %d %% %d = %d\n", num1, num2, num1 % num2);
            } else {
                printf("Erreur : Modulo par zéro impossible!\n");
            }
            break;
            
        case '&':
            printf("ET binaire (AND) : %d & %d = %d\n", num1, num2, num1 & num2);
            printf("  Binaire : %d (0x%X) & %d (0x%X) = %d (0x%X)\n", 
                   num1, num1, num2, num2, num1 & num2, num1 & num2);
            break;
            
        case '|':
            printf("OU binaire (OR) : %d | %d = %d\n", num1, num2, num1 | num2);
            printf("  Binaire : %d (0x%X) | %d (0x%X) = %d (0x%X)\n", 
                   num1, num1, num2, num2, num1 | num2, num1 | num2);
            break;
            
        case '~':
            printf("NOT binaire (complément) : ~%d = %d\n", num1, ~num1);
            printf("  Binaire : ~%d (0x%X) = %d (0x%X)\n", 
                   num1, num1, ~num1, ~num1);
            printf("  (Note : le ~ s'applique à num1 uniquement)\n");
            break;
            
        default:
            printf("Erreur : Opérateur '%c' non reconnu!\n", op);
            printf("Opérateurs valides : +, -, *, /, %%, &, |, ~\n");
            break;
    }
    
    return 0;
}


