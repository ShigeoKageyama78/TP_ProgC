#include <stdio.h>

int main(void)
{
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int i, j;
    int taille = 5;  
    
    printf("=== Affichage de nombres en format binaire ===\n\n");
    
    // Parcourir tous les nombres à tester
    for (i = 0; i < taille; i++)
    {
        int nombre = nombres[i];
        
        printf("Nombre décimal : %d\n", nombre);
        printf("Hexadécimal    : 0x%X\n", nombre);
        printf("Binaire        : ", nombre);
        
        // Affichage en binaire en utilisant l'opérateur & (ET binaire)
        // On teste chaque bit de gauche à droite (du bit 31 au bit 0 pour un int 32 bits)
        int bit_affiches = 0;  // Compte les bits affichés
        
        for (j = 31; j >= 0; j--)
        {

            int masque = 1 << j;  
            
     
            if (nombre & masque)  
            {
                printf("1");
                bit_affiches = 1;  
            }
            else
            {

                if (bit_affiches || j == 0)  
                {
                    printf("0");
                }
            }
 
            if (bit_affiches && j > 0 && j % 4 == 0)
            {
                printf(" ");
            }
        }
        
        printf("\n\n");
    }
    
    return 0;
}
