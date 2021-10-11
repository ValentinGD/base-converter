#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "De_Base_N_a_10.h"

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
    numConvertido=(char *) malloc(sizeof(char)*19);


    numero="5bc.62D\\o";
    *baseOrigen=16;
    *baseDestino=10;
    if(*baseDestino==10){
            deNa10(baseOrigen,numero,numConvertido);

    }else{
        if(*baseDestino==10){

        }
    }

    free(numero);
    free(baseOrigen);
    free(baseDestino);
    free(numConvertido);
    return 0;
}
