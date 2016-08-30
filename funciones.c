
#include "funciones.h"

float suma(float ope1,float ope2)
{
   float resultado;
   resultado=ope1+ope2;
   return resultado;
}

float resta(float ope1,float ope2)
{
    float resultado;
    resultado=ope1-ope2;
    return resultado;
}

float division(float ope1, float ope2)
{
    float resultado;
    resultado=ope1/ope2;
    return resultado;
}

float mult (float ope1,float ope2)
{
    float resultado;
    resultado=ope1*ope2;
    return resultado;
}

int acuFact (int ope1)
{
                int fact;
                int resultado;
                resultado=ope1;
                for(fact=ope1;fact>1;fact--)
                {
                    ope1--;
                    resultado=resultado*ope1;
                }
                return resultado;
}
