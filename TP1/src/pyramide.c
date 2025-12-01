
#include <stdio.h>

int main(void)
{
    int n;
    int i, j;
    
    printf("=== Générateur de pyramide de nombres ===\n\n");
    printf("Entrez la hauteur de la pyramide (1-9 recommandé) : ");
    scanf("%d", &n);
    

    if (n < 1)
    {
        printf("Erreur : la hauteur doit être au moins 1.\n");
        return 1;
    }
    
    if (n > 9)
    {
        printf("Attention : pour n > 9, l'affichage peut être déformé.\n");
    }
    
    printf("\nPyramide de hauteur %d :\n\n", n);
    
    for (i = 1; i <= n; i++)
    {
   
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        
 
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        

        for (j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }
        
        printf("\n");
    }
    
    printf("\n=== Pyramide terminée ===\n");
    
    return 0;
}
