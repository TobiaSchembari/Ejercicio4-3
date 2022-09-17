/*
 * ConversionTemp.c
 *
 *  Created on: Sep 17, 2022
 *      Author: topit
 */
#include <stdio.h>
#include <stdlib.h>
//
float ConversionCaF(int temp){
   int fahrenheit;
   float resultado;
   fahrenheit =(float)(temp * 9/5) + 32;
   resultado = fahrenheit;
 return resultado;
}

float ConversionFaC(int temp){
	float resultado;
   int celsius;
   celsius = (float)(temp - 32) * 5/9;
   resultado = celsius;
  return resultado;
}
