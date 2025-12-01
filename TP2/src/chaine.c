#include <stdio.h>

int my_strlen(const char *s) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

void my_strcpy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void my_strcat(char *dest, const char *src) {
    int i = 0;
    while (dest[i] != '\0') {
        i++;
    }
    int j = 0;
    while (src[j] != '\0') {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
}

int main(void) {
    char s1[100] = "Hello";
    char s2[100] = " World!";
    char copie[100];
    char concat[200];

    int len1 = my_strlen(s1);
    int len2 = my_strlen(s2);

    my_strcpy(copie, s1);

    my_strcpy(concat, s1);
    my_strcat(concat, s2);

    printf("s1 = \"%s\" (longueur = %d)\n", s1, len1);
    printf("s2 = \"%s\" (longueur = %d)\n", s2, len2);
    printf("copie  de s1 = \"%s\"\n", copie);
    printf("concat = \"%s\"\n", concat);

    return 0;
}
