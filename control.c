#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "De_Base_N_a_10.h"

#define verdadero 0
#define falso 1

void recorrerYControlar(char *num, int *base, int *estaCorrecto);
void controlLogitud(char * num, int *cumpleFormato);
void controlFormato(int *digInt, int *cumpleFormato);
void controlDigitoValido(int *digInt, char *dig, int *digValido,int *base);
void controlBaseValida(int *base,int *baseValida);


void recorrerYControlar(char *num, int *base, int *estaCorrecto){
    printf("Entra en control\n");
    int *indiceNum;
    indiceNum=(int *)malloc(sizeof(int));

    int *digInt;
    digInt=(int *)malloc(sizeof(int));

    int *digIntMapeado;
    digIntMapeado=(int *)malloc(sizeof(int));

    char *dig;
    dig=(char *)malloc(sizeof(char));

    *estaCorrecto=verdadero;
    *indiceNum=0;
    controlBaseValida(base,estaCorrecto);
    controlLogitud(num, estaCorrecto);
    printf("Termina ControlLongitud\n");
    while(num[*indiceNum]!='\0' && *estaCorrecto==verdadero){
        *dig=num[*indiceNum];
        *digInt= *dig - 0;
        controlFormato(digInt, estaCorrecto);
        printf("Termina controlFormato\n");
        if(*estaCorrecto==verdadero){
            controlDigitoValido(digInt, dig,estaCorrecto,base);
            printf("Termina controlDigitoValido\n");
        *indiceNum=*indiceNum+1;
        }
    }
    free(indiceNum);
    free(digInt);
    free(digIntMapeado);
    free(dig);
}
void controlLogitud(char * num, int *cumpleFormato){

    char *numParteEntera;
    numParteEntera=(char *)malloc(sizeof(char));

    char *numParteDecimal;
    numParteDecimal=(char *)malloc(sizeof(char));

    dividirCadenas(numParteEntera,numParteDecimal,num);

    if(strlen(numParteEntera)>10 || strlen(numParteDecimal)>5){
        *cumpleFormato=falso;
    }
}
void controlFormato(int *digInt, int *cumpleFormato){
    if((*digInt>=49 && *digInt<=57) || (*digInt>=65 && *digInt<=70) || (*digInt>=97&& *digInt<=102) || *digInt==46){
        *cumpleFormato=verdadero;
    }else{
        *cumpleFormato=falso;
    }
}
void controlDigitoValido(int *digInt, char *dig, int *digValido,int *base){
    mapearDigito(dig,digInt);
    if(*digInt< *base){
            *digValido=verdadero;
    }else{
            *digValido=falso;
    }
}
void controlBaseValida(int *base,int *baseValida){
    if(*base<2 || *base>16)
        *baseValida=falso;
}
