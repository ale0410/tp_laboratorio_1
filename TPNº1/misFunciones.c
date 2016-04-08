#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/** \brief Ingresa el primer operando y lo retorna
 *
 * \param El primer operando
 * \return El primer operando
 *
 */


float ingresarPrimerOperando(float a)
{
    a= 0.0;

	printf("\nIngrese el primer operando: ");
	fflush(stdin);
	scanf("%f", &a);

	return a;
}

/** \brief Ingresa el segundo operando y lo retorna
 *
 * \param El segundo operando
 * \return El segundo operando
 *
 */

float ingresarSegundoOperando(float b)
{
    b = 0.0;

	printf("\nIngrese el segundo operando: ");
	fflush(stdin);
	scanf("%f", &b);

	return b;
}

/** \brief Calcula la suma y retorna el resultado
 *
 * \param El primer operando
 * \param El segundo operando
 * \return El resultado de la suma
 *
 */

float calcularSuma(float a, float b)
{
	float suma;

	suma = a + b;

	return suma;
}

/** \brief Calcula la resta y retorna el resultado
 *
 * \param El primer operando
 * \param El segundo operando
 * \return El resultado de la resta
 *
 */

float calcularResta(float a, float b)
{
	float resta;

	resta = a - b;

	return resta;
}


/** \brief Calcula la division si el divisor es distinto de cero y retorna el resultado
 *
 * \param El primer operando
 * \param El segundo operando
 * \return El resultado de la division
 *
 */

float calcularDivision(float a, float b)
{
	float division;

	if(b == 0)
	{
		printf("\nError. Reingrese el segundo operando: ");
		fflush(stdin);
	    scanf("%f", &b);
	}

	division = a/b;

	return division;
}

/** \brief Calcula la multiplicacion y retorna el resultado
 *
 * \param El primer operando
 * \param El segundo operando
 * \return El resultado de la multiplicacion
 *
 */

float calcularMultiplicacion(float a, float b)
{
	float multiplicacion;

	multiplicacion = a*b;

	return multiplicacion;
}

/** \brief Calcula el factorial del primer operando y retorna el resultado siempre y cuando el numero sea positivo
 *
 * \param El primer operando
 * \return El resultado del factorial
 *
 */

int calcularFactorial(int a)
{
  int fact, i;

  fact = 1;

  if(!(a >= 0))
  {
      printf("\nError. Reingrese el numero a calcular el factorial: ");
      fflush(stdin);
      scanf("%d", &a);
  }

  if(a == 0 || a == 1)
  {
      return 1;
  }
  else
  {
      for (i = 2; i <= a; i++)
      {
           fact *= i;
      }

      return fact;
  }
}
