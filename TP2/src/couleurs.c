#include <stdio.h>

#define N 10

struct Couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

int main(void) {
    struct Couleur couleurs[N] = {
        {0xef, 0x78, 0x12, 0xff},
        {0x2c, 0xc8, 0x64, 0xff},
        {0x00, 0x00, 0x00, 0xff},
        {0xff, 0x00, 0x00, 0xff},
        {0x00, 0xff, 0x00, 0xff},
        {0x00, 0x00, 0xff, 0xff},
        {0xaa, 0xbb, 0xcc, 0xff},
        {0x11, 0x22, 0x33, 0xff},
        {0x44, 0x55, 0x66, 0xff},
        {0x77, 0x88, 0x99, 0xff}
    };

    for (int i = 0; i < N; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("  Rouge : %u\n", couleurs[i].r);
        printf("  Vert  : %u\n", couleurs[i].g);
        printf("  Bleu  : %u\n", couleurs[i].b);
        printf("  Alpha : %u\n\n", couleurs[i].a);
    }

    return 0;
}
