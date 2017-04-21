#include <stdio.h>
#include <stdlib.h>
#include "Prototipos.h"
#include <stdio.h>

int main()
{
    //printf("Hello world!\n");

    Director directores[5];
    Pelicula peliculas[5];
    int i;
    int contador =  0;


    IniciarArray_D(directores, 5);


    int indexVacio = BuscarLugarVacio_D(directores, 500);

    contador++;

    if(indexVacio>=0)
    {
        AltaDirector(directores, indexVacio, contador);

    }






    return 0;
}
