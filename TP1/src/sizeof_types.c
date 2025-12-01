#include <stdio.h>

int main() {
    printf("char:           %zu octets\n", sizeof(char));
    printf("short:          %zu octets\n", sizeof(short));
    printf("int:            %zu octets\n", sizeof(int));
    printf("long int:       %zu octets\n", sizeof(long int));
    printf("long long int:  %zu octets\n", sizeof(long long int));
    printf("float:          %zu octets\n", sizeof(float));
    printf("double:         %zu octets\n", sizeof(double));
    printf("long double:    %zu octets\n", sizeof(long double));
    return 0;
}
