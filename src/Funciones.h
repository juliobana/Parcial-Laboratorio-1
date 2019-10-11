/*
 * Funciones.h
 *
 *  Created on: 10 oct. 2019
 *      Author: Julio Baña
 */




#include <stdio.h>
#include <stdlib.h>
#include "Funciones.c"
#include "Funciones.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int getInt(char mensaje[]);
float getFloat(char mensaje[]);
char getChar(char mensaje[]);

char getNumeroAleatorio(int desde , int hasta, int iniciar);

int esNumerico(char str[]) ;
int esTelefono(char str[]);
int esAlfaNumerico(char str[]);
int esSoloLetras(char str[]);

void getString(char mensaje[],char input[]);
int getStringLetras(char mensaje[],char input[]);
int getStringNumeros(char mensaje[],char input[]);
