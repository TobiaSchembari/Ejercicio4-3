/*
 ============================================================================
 Name        : Ejercicio4-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "validaciones.h"
#include "ConversionTemp.h"


/////////////////////////////////////////////////////////////////////////////////////////
/*Ejercicio 4-3: Realizar un programa que permita la carga de temperaturas en Celsius y
Fahrenheit, validando las temperaturas ingresadas estén entre el punto de congelación y de
ebullición del agua para cada tipo de escala. Las validaciones se hacen en una biblioteca. Las
funciones de conversión de Fahrenheit a Celsius y de Celsius a Fahrenheit se hacen en otra.*/
/////////////////////////////////////////////////////////////////////////////////////////
//Punto Fusion agua en C = 0 C Punto ebullicion = 100 C // Punto Fusion en Farenheit = 32 F Punto Ebullicion 212 F.

int main(void) {
setbuf(stdout,NULL);

char letra;
float temperatura;
float conversion;
int validacion;

letra = ingresarLetraTemperatura();
printf("Ingrese Temperatura sin unidad de medida: ");
scanf("%f",&temperatura);


switch(letra){
case 'C':

	validacion= validarTemperaturaC(temperatura);

	 if(validacion == 0){
	conversion = ConversionCaF(temperatura);
	 printf("La conversion de %.2f Grados Celsius a Fahrenheit es de: %.2f Grados ",temperatura,conversion);
	 }else{
		 printf("Error temperatura no valida.");}

	break;
case'F':
	validacion = validarTemperaturaF(temperatura);
	if(validacion == 0){
	 conversion = ConversionFaC(temperatura);
	 printf("La conversion de %.2f Grados Fahrenheit a Celsius es de: %.2f Grados ",temperatura,conversion);
	}else{
		printf("Error temperatura no valida.");}

	 break;
}

	return EXIT_SUCCESS;
}



