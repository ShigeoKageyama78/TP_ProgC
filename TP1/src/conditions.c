#include <stdio.h>

int main(void)
{
    int somme = 0;
    int i;
    
    printf("=== Calcul de la somme avec conditions ===\n\n");
    printf("Règles :\n");
    printf("- Ajouter les nombres divisibles par 5 ou 7\n");
    printf("- Ignorer les nombres divisibles par 11\n");
    printf("- Arrêter si la somme dépasse 5000\n\n");
    

    for (i = 1; i <= 1000; i++)
    {
      
        if (i % 11 == 0)
        {
            continue; 
        }
        
       
        if (i % 5 == 0 || i % 7 == 0)
        {
            somme += i;  
            
         
            if (somme > 5000)
            {
                printf("La somme a dépassé 5000 au nombre %d\n", i);
                printf("Arrêt de la boucle avec break.\n\n");
                break;  
            }
        }
    }
    

    printf("Somme finale = %d\n", somme);
    
    if (i > 1000)
    {
        printf("La boucle s'est terminée normalement (tous les nombres de 1 à 1000 ont été parcourus).\n");
    }
    else
    {
        printf("La boucle a été interrompue au nombre %d.\n", i);
    }
    
    return 0;
}
