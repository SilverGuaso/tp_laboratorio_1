#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int ope1;
    int ope2;
    int suma;
    int resta;
    int mult;
    float div;
    int fact;
    int acuFact;
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
                scanf("%d",&ope1);
                system("cls");
                a=(char)ope1+48;
                break;
            case 2:
                printf("Ingrese 2do operando:");
                scanf("%d",&ope2);
                system("cls");
                b=(char)ope2+48;
                break;
            case 3:
                suma=ope1+ope2;
                printf("========================================\n");
                printf("El resultado de la suma es: %d\n",suma);
                printf("========================================\n");
                break;
            case 4:
                resta=ope1-ope2;
                printf("========================================\n");
                printf("El resultado de la resta es: %d\n",resta);
                printf("========================================\n");
                break;
            case 5:
                if(ope2!=0)
                {
                    div=(float)ope1/ope2;
                    printf("========================================\n");
                    printf("La division da: %f\n",div);
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
                mult=ope1*ope2;
                printf("========================================\n");
                printf("La multiplicacion es de: %d\n",mult);
                printf("========================================\n");
                break;
            case 7:
                acuFact=ope1;
                for(fact=ope1;fact>1;fact--)
                {
                    ope1--;
                    acuFact=acuFact*ope1;
                }
                printf("========================================\n");
                printf("El factorial del pimer operando es: %d\n",acuFact);
                printf("========================================\n");
                break;
            case 8:
                printf("========================================\n");
                printf("La suma es de %d\nLa resta es: %d\nLa multiplicacion es: %d\nLa Division es: %f\nEl factorial del 1er operando es: %d\n",suma,resta,mult,div,acuFact);
                printf("========================================\n");
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }
    return 0;
}
