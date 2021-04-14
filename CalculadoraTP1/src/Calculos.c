/*
 * Calculos.c
 *
 *  Created on: 10 abr. 2021
 *      Author: Comishi - Pau
 */

int sumar(int A, int B)//Realiza la suma entre A y B. Recibe par�metros A y B y retorna el resultado de la suma.
{
	int suma;

	suma = A+B;

	return suma;
}
int restar(int A, int B)//Realiza la resta entre A y B. Recibe par�metros A y B y retorna el resultado de la resta.
{
	int resta;

	resta=A-B;

	return resta;
}
float dividir(int A, int B)//Realiza la divisi�n entre A y B. Recibe par�metros A y B y retorna el resultado de la divisi�n.
{
	float division;

	division= (float)A/B;

	return division;
}
int multiplicar (int A, int B)//Realiza la multiplicaci�n entre A y B. Recibe par�metros A y B y retorna el resultado de la multiplicaci�n.
{
	int multiplicacion;

	multiplicacion=A*B;

	return multiplicacion;
}
double factorial(int F)//Realiza el factorial de A o B. Recibe par�metro A o B, descarta que sea menor a 1 y retorna el resultado del factorial o 0 en caso de que el par�metro sea menor a 1.
{
	double factorialF;

	factorialF=1;
	if(F>0)
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


