#include <stdio.h>
#include <stdlib.h>
#include "funcionesparacalculadora.h"

/** \brief Solicita dos numeros y los suma
 *
 * \param a Numero a ingresar por el usuario
 * \param b Segundo numero a ingresar por el usuario
 * \return En caso de no dar error, retorna la suma de las dos variables.
 *
 */

float funcion_Suma(float a,float b)
{
    float suma;
    suma = a+b;
    return suma;
}


/** \brief Solicita dos numeros y los resta
 *
 * \param a Numero a ingresar por el usuario
 * \param b Segundo numero a ingresar por el usuario
 * \return En caso de no dar error, retorna la resta de las dos variables.
 *
 */

float funcion_Resta(float a,float b)
{
    float resta;
    resta = a-b;
    return resta;
}


/** \brief Solicita dos numeros y los multiplica
 *
 * \param a Numero a ingresar por el usuario
 * \param b Segundo numero a ingresar por el usuario
 * \return En caso de no dar error, retorna la multiplicacion de las dos variables.
 *
 */

float funcion_Multiplicacion(float a,float b)
{
    float multiplicacion;
    multiplicacion = a*b;
    return multiplicacion;
}

/** \brief Solicita dos numeros y los divide
 *
 * \param a Numero a ingresar por el usuario
 * \param b Segundo numero a ingresar por el usuario
 * \return En caso de no dar error, retorna la division de las dos variables.
 *
 */

float funcion_Division(float a,float b)
{

    if(b==0)
    {
        printf("Error.");
        return -1;
    }
    else
    {
        float division;
        division = a/b;
        return division;
    }
}
/** \brief Solicita un numero y saca el factorial
 *
 * \param a
 * \param
 * \return
 *
 */

int funcion_Factorial(int a)
{
    int valor;
    if(a==0)
    {
        return 1;
    }
    valor=a*funcion_Factorial(a-1);
    return valor;
};


/**
 * \brief Solicita un texto numérico al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo números
 */
int funcion_getStringNumeros(char mensaje[],char input[])
{
    char aux[256];
    funcion_getString(mensaje,aux);
    if(funcion_ValidarNumero(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}


/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return void
 */
void funcion_getString(char mensaje[],char input[])
{
    printf("%s",mensaje);
    gets(input);
}

/**
 * \brief Verifica si el valor recibido es numérico
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */

int funcion_ValidarNumero(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if(str[i] < '0' || str[i] > '9')
           return 0;
       i++;
   }
   return 1;
}
