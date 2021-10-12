#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "De_Base_N_a_10.h"
#include "control.h"

#define precision 16
#define precisionEntera 10
#define precisionDecimal 5

/*PROYECTO OdC "convert"*/


int main() {
    char *numero;
    numero=(char *) malloc(precision * sizeof(char));

    int *baseOrigen;
    baseOrigen=(int *) malloc(sizeof(int));

    int *baseDestino;
    baseDestino=(int *) malloc(sizeof(int));

    char *numConvertido;
    numConvertido=(char *) malloc(sizeof(char)*40);

    int *control;
    control=(int *) malloc(sizeof(int));


    numero="66d.563\0";
    *baseOrigen=1;
    *baseDestino=10;
    recorrerYControlar(numero,baseOrigen,control);

    if(*control==0){
        printf("El numero %s cumple con el formato que precisa el programa\n",numero);
    }else{
        printf("El numero %s NO cumple con el formato que precisa el programa\n",numero);
    }

    free(numero);
    free(baseOrigen);
    free(baseDestino);
    free(numConvertido);
    return 0;
}
