#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"




int main()
{
    char seguir='s';
    int opcion=0;
    float ope1;
    float ope2;
//    float suma;
//    float resta;
//    float mult;
//    float division;
//    float fact;
//    float acuFact;
    char a='x';
    char b='y';

    while(seguir=='s')
    {

        printf("1- Ingresar 1er operando (A=%c) \n",a);
        printf("2- Ingresar 2do operando (B=%c)\n",b);
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
                printf("Ingrese 1er operando:");
                scanf("%f",&ope1);
                system("cls");
                a=(char)ope1+48;
                break;
            case 2:
                printf("Ingrese 2do operando:");
                scanf("%f",&ope2);
                system("cls");
                b=(char)ope2+48;
                break;
            case 3:

                printf("========================================\n");
                printf("El resultado de la suma es: %f\n",suma(ope1,ope2));
                printf("========================================\n");
                break;
            case 4:

                printf("========================================\n");
                printf("El resultado de la resta es: %f\n",resta(ope1,ope2));
                printf("========================================\n");
                break;
            case 5:
                if(ope2!=0)
                {

                    printf("========================================\n");
                    printf("La division da: %f\n",division(ope1,ope2));
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

                printf("========================================\n");
                printf("La multiplicacion es de: %f\n",mult(ope1,ope2));
                printf("========================================\n");
                break;
            case 7:

                printf("========================================\n");
                printf("El factorial del pimer operando es: %d\n",acuFact(ope1));
                printf("========================================\n");

                break;
            case 8:
                printf("========================================\n");
                printf("La suma es de %f\nLa resta es: %f\nLa multiplicacion es: %f\nLa Division es: %f\nEl factorial del 1er operando es: %d\n",suma(ope1,ope2),resta(ope1,ope2),mult(ope1,ope2),division(ope1,ope2),acuFact(ope1));
                printf("========================================\n");
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }
    return 0;
}
