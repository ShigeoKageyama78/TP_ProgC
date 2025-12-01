#include <stdio.h>

int main(void) {
    char c = 'A';
    short s = -123;
    int i = 42;
    long int li = 123456L;
    long long int lli = -9876543210LL;
    float f = 2.0f;
    double d = 3.14;
    long double ld = 1.0L;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    union { float f; unsigned int u; } uf;
    union { double d; unsigned long long u; } ud;

    printf("Avant manipulation :\n");
    printf("  c  : adresse = %p, valeur = %02x\n", (void*)pc, (unsigned char)c);
    printf("  s  : adresse = %p, valeur = %hx\n", (void*)ps, (unsigned short)s);
    printf("  i  : adresse = %p, valeur = %x\n", (void*)pi, (unsigned int)i);
    printf("  li : adresse = %p, valeur = %lx\n", (void*)pli, (unsigned long)li);
    printf("  lli: adresse = %p, valeur = %llx\n", (void*)plli, (unsigned long long)lli);

    uf.f = f;
    ud.d = d;
    printf("  f  : adresse = %p, bits = %08x\n", (void*)pf, uf.u);
    printf("  d  : adresse = %p, bits = %016llx\n", (void*)pd, (unsigned long long)ud.u);
    /* pour long double, affichage simple en hex de l'adresse seulement */
    printf("  ld : adresse = %p\n", (void*)pld);

    *pc = 'B';
    *ps = -456;
    *pi = 100;
    *pli = 654321L;
    *plli = -1;
    *pf = 1.0f;
    *pd = 1.0;
    *pld = 2.0L;

    uf.f = f;
    ud.d = d;

    printf("\nApres manipulation :\n");
    printf("  c  : adresse = %p, valeur = %02x\n", (void*)pc, (unsigned char)c);
    printf("  s  : adresse = %p, valeur = %hx\n", (void*)ps, (unsigned short)s);
    printf("  i  : adresse = %p, valeur = %x\n", (void*)pi, (unsigned int)i);
    printf("  li : adresse = %p, valeur = %lx\n", (void*)pli, (unsigned long)li);
    printf("  lli: adresse = %p, valeur = %llx\n", (void*)plli, (unsigned long long)lli);
    printf("  f  : adresse = %p, bits = %08x\n", (void*)pf, uf.u);
    printf("  d  : adresse = %p, bits = %016llx\n", (void*)pd, (unsigned long long)ud.u);
    printf("  ld : adresse = %p\n", (void*)pld);

    return 0;
}
