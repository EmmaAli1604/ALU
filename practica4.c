#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main(int argc, char const *argv[])
{
    int lenght = argc-1;
    float datos[lenght];
    int flag = *argv[1];
    
    for(int i = 0; i < lenght; i++){
        datos[i] = atof(argv[i+1]);
    }

    printf("%s",flag);
    // switch (flag)
    // {
    // case 'A':
    //     printf("%f\n",media_aritmetica(datos,lenght-1));
    //     break;
    // case 'H':
    //     printf("%f\n",media_armonica(datos,lenght-1));
    //     break;
    // case 'G':
    //     printf("%f\n",media_geometrica(datos,lenght-1));
    //     break;
    // default:
    //     printf("No se encuentra tal opcion\n");
    //     break;
    // }
    return 0;
}
