#include "function.h"


int cuadrado(int* ptr) 
{
    int valor = (*ptr) * (*ptr);  

    return valor;	
}

int cuadra2(int numero) {
    int i = 9;
    i++;    
    return cuadrado(&numero);
}
