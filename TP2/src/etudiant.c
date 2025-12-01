#include <stdio.h>

#define N 5

int main(void) {
    char noms[N][30] = {
        "Dupont", "Martin", "Durand", "Bernard", "Petit"
    };
    char prenoms[N][30] = {
        "Marie", "Pierre", "Luc", "Sophie", "Ali"
    };
    char adresses[N][100] = {
        "1, Rue A", "2, Rue B", "3, Rue C", "4, Rue D", "5, Rue E"
    };

    float note_prog[N] = {16.5f, 14.0f, 12.5f, 18.0f, 10.5f};
    float note_sys[N]  = {12.1f, 14.1f, 11.0f, 17.5f, 9.0f};

    for (int i = 0; i < N; i++) {
        printf("Etudiant %d :\n", i + 1);
        printf("  Nom      : %s\n", noms[i]);
        printf("  Prenom   : %s\n", prenoms[i]);
        printf("  Adresse  : %s\n", adresses[i]);
        printf("  Prog C   : %.1f\n", note_prog[i]);
        printf("  Sys. Exp : %.1f\n\n", note_sys[i]);
    }

    return 0;
}
