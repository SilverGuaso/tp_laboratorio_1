#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20

struct datos
{
    char nombre[50];
    int edad;
    int dni;
    int estado;

};


int main()
{
    struct datos arrayDatos[MAX];

    int i, mayores=0, menores=0, de19a35=0,flag=0, mayor ;
    int auxDni;


    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {

        printf("\n1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                    system("cls");
                      for (i=0;i<MAX;i++)
                        {
                            if(arrayDatos[i].estado!=1)
                            {


                            printf("Ingrese el nombre:\n");
                            fflush(stdin);
                            gets(arrayDatos[i].nombre);
                            printf("Ingrese la edad:\n");
                            scanf("%d",&arrayDatos[i].edad);
                            if(arrayDatos[i].edad<19)
                            {
                                menores++;
                            }
                            else
                            {
                                if(arrayDatos[i].edad>35)
                                {
                                    mayores++;
                                }
                                else
                                {
                                    de19a35++;
                                }
                            }
                            printf("Ingrese el DNI:\n");
                            scanf("%d",&arrayDatos[i].dni);
                            arrayDatos[i].estado=1;
                            break;
                            }
                            else
                            {
                                if(i==MAX-1)
                                {
                                    printf("Todas las posiciones ocupadas\n");
                                }
                            }


                        }





                break;
            case 2:
                    system("cls");
                    printf("DNI a borrar:");
                    scanf("%d",&auxDni);
                for(i=0;i<MAX;i++)
                {

                    if(arrayDatos[i].estado==1)
                    {
                        if(arrayDatos[i].dni==auxDni)
                        {
                        arrayDatos[i].estado=0;
                        if(arrayDatos[i].edad<19)
                            {
                                menores--;
                            }
                            else
                            {
                                if(arrayDatos[i].edad>35)
                                {
                                    mayores--;
                                }
                                else
                                {
                                    de19a35--;
                                }
                            }

                        break;
                        }
                        else
                        {
                           if(i==MAX-1)
                            {
                                printf("\nNingun DNI encontrado.\n");
                            }
                        }
                    }
                    else
                    {
                        if(i==MAX-1)
                        {
                            printf("No Hay ningun dato ingresado");
                        }

                    }

                }
                break;
            case 3:
                for(i=0;i<MAX;i++)
                {
                    if(arrayDatos[i].estado==1)
                    {
                         printf("Nombre: %s Edad: %d DNI:%d",arrayDatos[i].nombre,arrayDatos[i].edad,arrayDatos[i].dni);
                    }

                    else
                    {
                        if(i==MAX-1)
                        printf("No hay datos para mostrar");
                    }

                }
                break;
            case 4:
                if(menores >= de19a35 && menores >= mayores){
                                mayor = menores;
                            }else{
                                if(de19a35 >= menores && de19a35 >= mayores)
                                {
                                    mayor = de19a35;
                                }
                                else{
                                mayor = mayores;
                                }
                            }

                            for(i=mayor; i>0; i--){
                                if(i<10){
                                    printf("%02d|",i);
                                }
                                else
                                    printf("%02d|",i);

                                if(i<= menores){
                                    printf("*");
                                }
                                if(i<= de19a35){
                                    flag=1;
                                    printf("\t*");
                                }
                                if(i<= mayores){
                                    if(flag==0)
                                        printf("\t\t*");
                                    if(flag==1)
                                        printf("\t*");

                                }
                                //Bajo una linea luego de cada iteracion
                                printf("\n");
                            }
                            printf("--+-----------------");
                            printf("\n  |<18\t19-35\t>35");
                            printf("\n   %d\t%d\t%d", menores, de19a35, mayores);
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
