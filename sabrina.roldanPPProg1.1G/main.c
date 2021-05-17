#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 20


/*
1- Crear una función llamada aplicarDescuento que reciba como parámetro el
precio de un producto y devuelva el valor del producto con un
descuento del 5%. Realizar la llamada desde el main
]*/

float aplicarDescuento(float precio);

/*
2- Crear una función que se llame contarCaracteres que reciba una cadena de caracteres
como primer parámetro y un carácter como segundo y devuelva la cantidad de
veces que ese carácter aparece en la cadena *
*/
int contarCaracteres(char* cadena, char buscarBuscar);

/*
3-Dada la estructura Notebook(id, procesador, marca, precio) generar una función
que permita ordenar un array de dicha estructura por marca. Ante igualdad de
marca deberá ordenarse por precio. Hardcodear datos y mostrarlos
*/
//void ordenarArray(eNotebook list[],int tam);

int main()
{


    printf("Funcion aplicar descuento: %.2f\n",aplicarDescuento(1000));

    printf("Funcion contar caracteres: %d\n",contarCaracteres("Sabrina",'a'));

    return 0;
}

float aplicarDescuento(float precio)
{
    return precio=precio-(precio*0.15);
}

int contarCaracteres(char* cadena, char buscarBuscar)
{
    int contCaracteres=0;

    for(int i=0;i<strlen(cadena);i++)
    {
        if(cadena[i]==buscarBuscar)
        {
            contCaracteres=contCaracteres+1;
        }
    }

    return contCaracteres;
}

