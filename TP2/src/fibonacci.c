#include <stdio.h>

int main(void) {
    int n;

    printf("Entrez n : ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("n invalide\n");
        return 1;
    }

    int u0 = 0;
    int u1 = 1;

    if (n >= 0)
        printf("%d", u0);
    if (n >= 1)
        printf(", %d", u1);

    for (int i = 2; i <= n; i++) {
        int un = u0 + u1;
        printf(", %d", un);
        u0 = u1;
        u1 = un;
    }

    printf("\n");
    return 0;
}
