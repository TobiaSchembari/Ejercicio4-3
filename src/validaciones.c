/*
 * validaciones.c
 *
 *  Created on: Sep 17, 2022
 *      Author: topit
 */
#include <stdio.h>
#include <stdlib.h>

char ingresarLetraTemperatura(){

	char letra;

do{
	fflush(stdin);
	printf("Que temperatura desea ingresar :\nF = 'Fahrenheit'\nC = 'Celsius' : ");
	scanf("%c", &letra);
  }while(letra != 'C' && letra != 'F' );

return letra;

}
int validarTemperaturaC(int temp){
	int retorno;
	if(temp< 0 || temp > 100){
		retorno = -1;
	}else{
		retorno = 0;
	}
	return retorno;
}
int validarTemperaturaF(int temp){
	int retorno;
	if(temp< 32 || temp > 212){
		retorno = -1;
	}else{
		retorno = 0;
	}
	return retorno;
}
