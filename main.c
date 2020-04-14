#include <stdio.h>
#include <stdlib.h>
#include "funcionesparacalculadora.h"

int main()
{
    int opcion;
    float a;
    float b;
    float suma,resta,division,multiplicacion;
    int valor,result;

    do
    {
        printf("\nCALCULADORA");
        printf("\n1.Suma");
        printf("\n2.Resta");
        printf("\n3.Multiplicacion");
        printf("\n4.Division");
        printf("\n5.Factorial");
        printf("\n6.Salir\n");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            printf("\nIntroduce un numero:");
            scanf("%f",&a);
            printf("\nIntroduce otro numero");
            scanf("%f",&b);
            suma = funcion_Suma(a,b);
            printf("El resultado es %0.2f \n",suma);
            system("pause");
            system("cls");
            break;

        case 2:
            printf("\nIntroduce un numero:");
            scanf("%f",&a);
            printf("\nIntroduce otro numero");
            scanf("%f",&b);
            resta=funcion_Resta(a,b);
            printf("El resultado es %0.2f",resta);
            system("pause");
            system("cls");
            break;

        case 3:
            printf("\nIntroduce un numero:");
            scanf("%f",&a);
            printf("\nIntroduce otro numero");
            scanf("%f",&b);
            multiplicacion=funcion_Multiplicacion(a,b);
            printf("El resultado es %0.2f",multiplicacion);
            system("pause");
            system("cls");
            break;

        case 4:
            printf("\nIntroduce un numero:");
            scanf("%f",&a);
            printf("\nIntroduce otro numero");
            scanf("%f",&b);
            division=funcion_Division(a,b);
            printf("El resultado es %0.2f",division);
            system("pause");
            system("cls");
            break;

        case 5:
            printf("\nIngrese numero:");
            scanf("%d",&valor);
            result=funcion_Factorial(valor);
            printf("\nEl factorial de %d es %d",valor,result);
            system("pause");
            system("cls");
            break;
        }

        }while(!(opcion==6));

       // system("cls");
        //fflush(stdin);

}
