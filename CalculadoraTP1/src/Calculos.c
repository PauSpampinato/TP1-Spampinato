/*
 * Calculos.c
 *
 *  Created on: 10 abr. 2021
 *      Author: Spampinato Paula
 */
#include "Calculos.h"

/** \brief Realiza la operaci�n de suma entre dos operandos
 * \param A primer operando A
 * \param B segundo operando B
 * \return retorna el resultado de la operaci�n
 */
int calculos_sumar(int A, int B)
{
	int suma;

	suma = A+B;

	return suma;
}
/** \brief Realiza la operaci�n  resta entre dos operandos
 * \param A primer operando A
 * \param B segundo operando B
 * \return retorna el resultado de la operaci�n
 */
int calculos_restar(int A, int B)
{
	int resta;

	resta=A-B;

	return resta;
}
/** \brief Realiza la operaci�n de divisi�n entre dos operandos
 * \param A primer operando A
 * \param B segundo operando B
 * \return retorna el resultado de la operaci�n
 */
float calculos_dividir(int A, int B)
{
	float division;

	division= (float)A/B;

	return division;
}
/** \brief Realiza la operaci�n de multiplicaci�n entre dos operandos
 * \param A primer operando A
 * \param B segundo operando B
 * \return retorna el resultado de la operaci�n
 */
int calculos_multiplicar (int A, int B)
{
	int multiplicacion;

	multiplicacion=A*B;

	return multiplicacion;
}
/** \brief Realiza el factorial de un n�mero
 * \param F numero a ser factorializado (puede ser A o B)
 * \return retorna el valor del factorial o 0 si no se puede realizar.
 */
double calculos_factorial(int F)
{
	double factorialF;

	factorialF=1;
	if(F>=0)
	{
		while(F>1)
		{
			factorialF*=F;
			F--;
		}
	}
	else
	{
		factorialF=0;
	}
	return factorialF;
}


