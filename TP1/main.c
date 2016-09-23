#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"




int main()
{
    char seguir='s';
    int opcion=0;
    float operador1;
    float operador2;
//    float suma;
//    float resta;
//    float mult;
//    float division;
//    float fact;
//    float acuFact;
    int a=0;
    int b=0;

    while(seguir=='s')
    {

        printf("1- Ingresar 1er operando (A=%d) \n",a);
        printf("2- Ingresar 2do operando (B=%d)\n",b);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                system("cls");
                printf("Ingrese 1er operando:");
                scanf("%f",&operador1);
                system("cls");
                a=operador1;
                break;
            case 2:
                system("cls");
                printf("Ingrese 2do operando:");
                scanf("%f",&operador2);
                system("cls");
                b=operador2;
                break;
            case 3:
                system("cls");
                printf("========================================\n");
                printf("El resultado de la suma es: %f\n",suma(operador1,operador2));
                printf("========================================\n");
                break;
            case 4:
                system("cls");
                printf("========================================\n");
                printf("El resultado de la resta es: %f\n",resta(operador1,operador2));
                printf("========================================\n");
                break;
            case 5:
                system("cls");
                if(operador2!=0)
                {

                    printf("========================================\n");
                    printf("La division da: %f\n",division(operador1,operador2));
                    printf("========================================\n");
                }
                else
                {
                    printf("========================================\n");
                    printf("No se puede dividir por 0 (CERO)\n");
                    printf("========================================\n");
                }

                break;
            case 6:
                system("cls");
                printf("========================================\n");
                printf("La multiplicacion es de: %f\n",mult(operador1,operador2));
                printf("========================================\n");
                break;
            case 7:
                system("cls");
                printf("========================================\n");
                printf("El factorial del primer operando es: %ld\n",factorial(operador1));
                printf("========================================\n");

                break;
            case 8:
                system("cls");
                if(operador2!=0)
                {
                    printf("========================================\n");
                    printf("La suma es de %f\nLa resta es: %f\nLa multiplicacion es: %f\nLa Division es: %f\nEl factorial del 1er operando es: %ld\n",suma(operador1,operador2),resta(operador1,operador2),mult(operador1,operador2),division(operador1,operador2),factorial(operador1));
                    printf("========================================\n");
                }
                else
                {
                    printf("========================================\n");
                    printf("La suma es de %f\nLa resta es: %f\nLa multiplicacion es: %f\nEl factorial del 1er operando es: %ld\nLa division NO puede ser realizada por 0 (CERO)\n",suma(operador1,operador2),resta(operador1,operador2),mult(operador1,operador2),factorial(operador1));
                    printf("========================================\n");

                }

                break;
            case 9:
                seguir = 'n';
                break;
        }

    }
    return 0;
}
