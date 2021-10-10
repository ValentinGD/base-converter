#include <stdio.h>
#include <stdlib.h>
#include "De_Base_N_a_10.c"

#define precision 16
#define precisionEntera 10
#define precisionDecimal 5

/*PROYECTO OdC "convert"*/


void main() {
    char *numero;
    numero=(char *) malloc(precision * sizeof(char));

    char *numEntero;
    numEntero=(char *) malloc(precisionEntera * sizeof(char));

    char *numDecimal;
    numDecimal=(char *) malloc(precisionDecimal * sizeof(char));

    int *baseOrigen;
    baseOrigen=(int *) malloc(sizeof(int));

    int *baseDestino;
    baseDestino=(int *) malloc(sizeof(int));

    int *cont;
    cont=(int *) malloc(sizeof(int));

    char *resultado;
    resultado=(char *) malloc(precision * sizeof(char));

    int *numConvertido;
    numConvertido=(int *) malloc(sizeof(int));


    printf("Ingresar numero a ser cambiado de base:");
    scanf("%s", *numero);

    printf("Ingresar base origen\n");
    scanf("%d", *baseOrigen);

    printf("Ingresar base destino\n");
    scanf("%d", *baseDestino);

    divideNumero(&numero,&numEntero,&numDecimal);

    if(*baseOrigen==10){
            deNa10Entero(&baseOrigen,&numEntero,&numConvertido);
            deNa10Decimal(&baseOrigen,&numDecimal,&numConvertido);
    }else{
        if(*baseDestino==10){

        }
    }

    free(numero);
    free(numEntero);
    free(numDecimal);
    free(baseOrigen);
    free(baseDestino);
    free(cont);
    free(resultado);
    free(numConvertido);
}



void divideNumero(char *n, char *nE, char *nD){
    int *contador;
    contador=malloc(sizeof(int));
    do{
        *nE=*n;
        n++;
        nE++;
    }while(*n!=".");

    n++;

    for(*contador=0;*contador<precisionDecimal;*contador++){
        *n=*nD;
        n++;
        nD++;
    }
    free(contador);
}
