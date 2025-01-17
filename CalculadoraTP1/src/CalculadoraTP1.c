/*
 ============================================================================
 Name        : CalculadoraTP1.c
 Author      : Spampinato Paula
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Calculos.h"


int menu(int A, int B);

int main(void) {
	setbuf(stdout,NULL);

	int A;
	int B;
	int opcion;
	int suma;
	int resta;
	float division;
	int multiplicacion;
	double factorialA;
	double factorialB;
	int salir;
	int flagYaCalculo;//flag para validar si ya se realizaron los calculos antes de poder mostrarlos.
	int flagBesCero;//flag para validar que B sea distinto de cero y poder realizar la divisi�n


	A=0;
	B=0;
	flagYaCalculo=0;
	salir=0;

	//Iteraci�n de tipo do while para que muestre el men� siempre hasta que el usuario decida salir.
	do
	{

		opcion=menu(A,B);


		switch(opcion)//condicional para decidir qu� hara el programa en funci�n de la opci�n del men� que eligi� el usuario.
		{
			case 1:
				printf("\n A=");
				scanf("%d", &A);
				break;
			case 2:
				printf("\n B=");
				scanf("%d", &B);
				break;
			case 3:
				suma=calculos_sumar(A,B);
				resta=calculos_restar(A,B);
					if (B!=0)//validando que B sea distinto de 0 para poder realizar la divisi�n
					{
						division=calculos_dividir(A,B);
						flagBesCero=0;
					}
					else
					{
						flagBesCero=1;
					}
				multiplicacion=calculos_multiplicar(A,B);
				factorialA=calculos_factorial(A);
				factorialB=calculos_factorial(B);
				flagYaCalculo=1;
				printf("\nSe calcularon las operaciones de manera exitosa.\n");
				break;
			case 4:
				if(flagYaCalculo==1)//condicional para saber si el usuario ya solicit� que se realicen los c�lculos antes de poder mostrarlos
				{
					printf("\na) El resultado de A+B es: %d", suma);
					printf("\nb) El resultado de A-B es: %d", resta);

					if(flagBesCero==1)//condicional para saber si se pudo realizar o no la divisi�n.
					{
						printf("\nc) No es posible dividir por cero");
					}
					else
					{
						printf("\nc) El resultado de A/B es: %.2f", division);
					}

					printf("\nd) El resultado de A*B es: %d", multiplicacion);
					if(factorialA==0)//condicional para saber si se pudieron realizar los factoriales
					{
						if(factorialB==0)
						{
							printf("\ne) No se puede calcular el factorial por ser A y B menores a 0.\n");
						}
						else
						{
							printf("\ne) El factorial de A no se puede calcular por ser A un numero menor a 0 y el factorial de B es: %.0lf\n", factorialB);
						}
					}
					else
					{
						if(factorialB==0)
						{
							printf("\ne) El factorial de A es: %.0lf y el factorial de B no se puede calcular por ser B un numero menor a 0\n", factorialA);
						}
						else
						{
							printf("\ne) El factorial de A es: %.0lf y el factorial de B es: %.0lf\n", factorialA, factorialB);
						}
					}
				}
				else
				{
					printf("\nDebe solicitar la opci�n 3 para calcular los resultados antes de mostrarlos.\n");
				}
				break;
			case 5:
				salir=1;
				break;
			default:
				printf("\n El numero ingresado no corresponde a una opci�n de men�. Por favor, vuelva a seleccionar una opci�n.");
				break;
		}
	}while(salir==0);
	return EXIT_SUCCESS;
}
/** \brief Muestra el men�
 * \param A recibe el dato guardado en A para mostrarlo en el men�
 * \param B recibe el dato guardado en B para mostrarlo en el men�
 * \return retorna un numero seg�n la opci�n del men� que el usuario elija.
 */
int menu(int A,int B)
{
	int opcion;

	printf("\n 1. Ingresar primer operando entero (A=%d)", A);
	printf("\n 2. Ingresar segundo operando entero (B=%d)", B);
	printf("\n 3. Calcular todas las operaciones");
	printf("\n 4. Informar resultados");
	printf("\n 5. Salir\n");
	scanf("%d", &opcion);

	return opcion;
}
