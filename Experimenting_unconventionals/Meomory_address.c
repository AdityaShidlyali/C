//Program to illustrate the memory addresses of each of the datatype

#include <stdio.h>
int main(){
    int a[8];
    char b[8];
    float c[8];
    double d[8];
    long int e[8];
    short int f[8];
    long long int g[8];
    printf("\t\t--The memory addresses--");
    //int
    printf("\n\n\t\t: integer :\n");
    printf("Hexadecimal\t\t\tCorresponding Decimal\n");
    for(int i=0;i<8;i++){
        printf("%p\t\t\t%u\n",&a[i],&a[i]);
    }
    //char
    printf("\n\n\t\t: char :\n");
    printf("Hexadecimal\t\t\tCorresponding Decimal\n");
    for(int i=0;i<8;i++){
        printf("%p\t\t\t%u\n",&b[i],&b[i]);
    }
    //float
    printf("\n\n\t\t: float :\n");
    printf("Hexadecimal\t\t\tCorresponding Decimal\n");
    for(int i=0;i<8;i++){
        printf("%p\t\t\t%u\n",&c[i],&c[i]);
    }
    //double
    printf("\n\n\t\t: double :\n");
    printf("Hexadecimal\t\t\tCorresponding Decimal\n");
    for(int i=0;i<8;i++){
        printf("%p\t\t\t%u\n",&d[i],&d[i]);
    }
    //long int
    printf("\n\n\t\t: long int :\n");
    printf("Hexadecimal\t\t\tCorresponding Decimal\n");
    for(int i=0;i<8;i++){
        printf("%p\t\t\t%u\n",&e[i],&e[i]);
    }
    //short int
    printf("\n\n\t\t: short int :\n");
    printf("Hexadecimal\t\t\tCorresponding Decimal\n");
    for(int i=0;i<8;i++){
        printf("%p\t\t\t%u\n",&f[i],&f[i]);
    }
    //long long int
    printf("\n\n\t\t: long long int :\n");
    printf("Hexadecimal\t\t\tCorresponding Decimal\n");
    for(int i=0;i<8;i++){
        printf("%p\t\t\t%u\n",&g[i],&g[i]);
    }

    return 0;
}