#include <stdio.h>

int main(void) {
    int d = 0x90000000; /* valeur d'exemple, tu peux la changer */

    int total_bits = sizeof(int) * 8;

    int bit4  = (d >> (total_bits - 4))  & 1;
    int bit20 = (d >> (total_bits - 20)) & 1;

    int resultat = (bit4 == 1 && bit20 == 1) ? 1 : 0;

    printf("%d\n", resultat);

    return 0;
}
