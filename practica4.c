#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int pasarInt(float n){
    int binary = n, decimal = 0, base = 1, remainder, temp;
    for (temp = binary; temp > 0; temp = temp / 10) {
        remainder = temp % 2;
        decimal = decimal + remainder * base;
        base = base * 2;
    }
    return decimal;
}

float pasarBinario(int n){
    int rem, bin=0, i=1;
	while(n!=0)
	{
		rem= n%2;
		bin += (rem*i);
		n /= 2;
		i *= 10;
	}
    return bin;
}

float AND(float opA, float opB){
    if(opA && opB){
        return ;
    }
    return;
}

float OR(float opA, float opB){
    if(opA || opB){
        return ;
    }
    return;
}

float adicion(float opA, float opB){
    return pasarBinario(opA+opB);
}

float sustraccion(float opA, float opB){
    return pasarBinario(opA-opB);
}

float igualdad(float opA, float opB){
    if(opA == opB){
        return ;
    }
    return ;
}

float menor_que(float opA, float opB){
    if(opA < opB){
        return ;
    }
    return ;
}

int main(int argc, char const *argv[])
{
    int lenght = argc-1;
    int datos[lenght];
    for(int i=0; i < lenght; i++){
        datos[i]=atoi(argv[i+1]);
    }

    int op=datos[0];
    int opA= datos[1];
    int opB= datos [2];

    switch (op)
    {
    case 0:
        printf("%f\n",AND(opA,opB));
        break;
    case 1:
        printf("%f\n",OR(opA,opB));
        break;
    case 10:
        printf("%f\n",adicion(opA,opB));
        break;
    case 11:
        printf("%f\n",sustraccion(opA,opB));
        break;
    case 100:
        printf("%f\n",igualdad(opA,opB));
        break;
    case 101:
        printf("%f\n",menor_que(opA,opB));
        break;
    }
    return 0;
}
