#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 11

void afficher_int(const int *t, int n) {
    for (int i = 0; i < n; i++) {
        const int *p = t + i;
        printf("%d", *p);
        if (i < n - 1)
            printf(", ");
    }
    printf("\n");
}

void afficher_float(const float *t, int n) {
    for (int i = 0; i < n; i++) {
        const float *p = t + i;
        printf("%.2f", *p);
        if (i < n - 1)
            printf(", ");
    }
    printf("\n");
}

int main(void) {
    int tab_int[N];
    float tab_float[N];

    srand((unsigned int)time(NULL));

    /* remplissage via pointeurs */
    for (int i = 0; i < N; i++) {
        int *pi = tab_int + i;
        float *pf = tab_float + i;

        *pi = rand() % 200;
        *pf = (float)(rand() % 1000) / 100.0f;
    }

    printf("Tableau d'entiers (avant) :\n");
    afficher_int(tab_int, N);

    printf("Tableau de floats (avant) :\n");
    afficher_float(tab_float, N);

    /* multiplication par 3 pour indices pairs (0,2,4,...) via pointeurs */
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            int *pi = tab_int + i;
            float *pf = tab_float + i;
            *pi = (*pi) * 3;
            *pf = (*pf) * 3.0f;
        }
    }

    printf("\nTableau d'entiers (apres x3 indices pairs) :\n");
    afficher_int(tab_int, N);

    printf("Tableau de floats (apres x3 indices pairs) :\n");
    afficher_float(tab_float, N);

    return 0;
}
