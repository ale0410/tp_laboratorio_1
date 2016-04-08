#include <stdio.h>
#include <stdlib.h>
#include "misFunciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int factorial, nfactorial;
    float a, b, suma, resta, multiplicacion, division;

    while(seguir=='s')
    {
    	printf("\n***Elija una de las 9 opciones***\n");
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir: ");
        fflush(stdin);
        scanf("%d",&opcion);

        while(!(opcion >= 1 && opcion <= 9))
        {
            system("cls");
            printf("***Error. Reelija una de las 9 opciones***\n");
            printf("1- Ingresar 1er operando (A=x)\n");
            printf("2- Ingresar 2do operando (B=y)\n");
            printf("3- Calcular la suma (A+B)\n");
            printf("4- Calcular la resta (A-B)\n");
            printf("5- Calcular la division (A/B)\n");
            printf("6- Calcular la multiplicacion (A*B)\n");
            printf("7- Calcular el factorial (A!)\n");
            printf("8- Calcular todas las operaciones\n");
            printf("9- Salir: ");
            fflush(stdin);
            scanf("%d",&opcion);
        }

        switch(opcion)
        {
            case 1:
                system("cls");
            	a = ingresarPrimerOperando(a);
                printf("\nEl primer numero es: %.2f\n", a);
                break;
            case 2:
                system("cls");
            	b = ingresarSegundoOperando(b);
            	printf("\nEl segundo numero es: %.2f\n", b);
                break;
            case 3:
                system("cls");
            	suma = calcularSuma(a,b);
            	printf("\nLa suma es: %.2f\n", suma);
                break;
            case 4:
                system("cls");
            	resta = calcularResta(a,b);
            	printf("\nLa resta es: %.2f\n", resta);
                break;
            case 5:
                system("cls");
            	division = calcularDivision(a,b);
            	printf("\nLa division es: %.2f\n", division);
                break;
            case 6:
                system("cls");
            	multiplicacion = calcularMultiplicacion(a,b);
            	printf("\nLa multiplicacion es: %.2f\n", multiplicacion);
                break;
            case 7:
                system("cls");
                nfactorial = (int) a;
            	factorial = calcularFactorial(nfactorial);
            	printf("\nEl factorial es: %d\n", factorial);
                break;
            case 8:
                system("cls");
                suma = calcularSuma(a,b);
                resta = calcularResta(a,b);
                division = calcularDivision(a,b);
                multiplicacion = calcularMultiplicacion(a,b);
                factorial = calcularFactorial(a);
                printf("\nLa suma es: %.2f\n", suma);
                printf("\nLa resta es: %.2f\n", resta);
                printf("\nLa division es: %.2f\n", division);
                printf("\nLa multiplicacion es: %.2f\n", multiplicacion);
                printf("\nEl factorial es: %d\n", factorial);
                break;
            case 9:
                system("cls");
                seguir = 'n';
                break;
        }

    }

    system("PAUSE");
    return 0;
}

