
#include "funciones.h"
/** \brief Suma dos flotantes
 * \param X es primer operador
 * \param Y es segundo operador
 * \return retorna el valor de la suma
 */

float suma(float x,float y)
{
   float resultado;
   resultado=x+y;
   return resultado;
}

/** \brief Resta entre dos flotantes
 *
 * \param X es el primer parametro
 * \param Y es el segundo parametro
 * \return retorna el valor de la resta
 *
 */


float resta(float x,float y)
{
    float resultado;
    resultado=x-y;
    return resultado;
}

/** \brief Realiza la division de dos flotantes
 *
 * \param X es el primer parametro
 * \param Y es el segundo parametro
 * \return retorna el resultado de la division
 *
 */

float division(float x, float y)
{
    float resultado;
    resultado=x/y;
    return resultado;
}

/** \brief Realiza la multiplicacion de dos flotantes
 *
 * \param X es el primer parametro
 * \param Y es el segundo parametro
 * \return retorna el resultado de la multiplicacion
 *
 */

float mult (float x,float y)
{
    float resultado;
    resultado=x*y;
    return resultado;
}

/** \brief realiza el factorial de un entero
 *
 * \param con la sentencia de control for recibimos el parametro.
 * \param mientras que sea mayor o igual a uno, este se multiplica por su antecesor.
 * \return retorna el factorial del parametro.
 *
 */

long int factorial (int x)
{

    long int resultado;
    resultado=1;
    for(x=x;x>=1;x--)
    {
        resultado=resultado*x;
    }
    return resultado;
}
