#include <stdio.h> 

int main(void)
{
    char c = 'A';
    int a = 1;
    float b = 2.32922;
    short d = 2;
    long int e = 10;
    double f = 123456789.0;
    long g = 123456789123456789L;  
    long long int i = 1234567890123456LL;  
    
    
    printf("char c = %c\n", c);          
    printf("int a = %d\n", a);              
    printf("float b = %f\n", b);          
    printf("short d = %d\n", d);          
    printf("long int e = %ld\n", e);       
    printf("double f = %lf\n", f);          
    printf("long g = %ld\n", g);           
    printf("long long int i = %lld\n", i);   
    
    return 0;  
}
