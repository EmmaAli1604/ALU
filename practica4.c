#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int pasarDecimal(int n){
    int binary = n, decimal = 0, base = 1, remainder, temp;
    for (temp = binary; temp > 0; temp = temp / 10) {
        remainder = temp % 2;
        decimal = decimal + remainder * base;
        base = base * 2;
    }
    return decimal;
}

void pasarBinario(size_t const size, void const * const ptr){
    unsigned char *b = (unsigned char*) ptr; 
    unsigned char byte;
    for(int i = size -1; i >= 0; i--){
        for(int j = 7; j>=0; j--){
            byte=(b[i] >> j) & 1;
            printf("%u",byte);
        }
    }
    printf("\n");
}

void AND(float opA, float opB){
    int f = 0;
    int t = 4294967295;
    if((opA && opB) == 1){
        pasarBinario(sizeof(t),&t);
    }else{
        pasarBinario(sizeof(f),&f);
    }
}

void OR(float opA, float opB){
    int f = 0;
    int t = 4294967295;
    if((opA || opB) == 1){
        pasarBinario(sizeof(t),&t) ;
    }else{
        pasarBinario(sizeof(f),&f);
    }
}

void adicion(float opA, float opB){
    int result = opA + opB;
    pasarBinario(sizeof(result),&result);
}

void sustraccion(float opA, float opB){
    int result = opA - opB;
    pasarBinario(sizeof(result),&result);
}

void igualdad(float opA, float opB){
    int f = 0;
    int t = 4294967295;
    if(opA == opB){
        pasarBinario(sizeof(t),&t);
    }else{
        pasarBinario(sizeof(f),&f);
    }
}

void menor_que(float opA, float opB){
    int f = 0;
    int t = 4294967295;
    if(opA < opB){
        pasarBinario(sizeof(t),&t);
    }else{
        pasarBinario(sizeof(f),&f);
    }
}

int main(int argc, char const *argv[])
{
    int lenght = argc-1;
    int datos[lenght];
    for(int i=0; i < lenght; i++){
        datos[i]=atoi(argv[i+1]);
    }

    int op = datos[0];
    int opA= pasarDecimal(datos[1]);
    int opB= pasarDecimal(datos[2]);

    printf("main:%d\n",opA&&opB);

    switch (op)
    {
    case 0:
        AND(opA,opB);
        break;
    case 1:
        OR(opA,opB);
        break;
    case 10:
        adicion(opA,opB);
        break;
    case 11:
        sustraccion(opA,opB);
        break;
    case 100:
        igualdad(opA,opB);
        break;
    case 101:
        menor_que(opA,opB);
        break;
    default:
        printf("No se encuentra la opción\n");
    }

    return 0;
}
