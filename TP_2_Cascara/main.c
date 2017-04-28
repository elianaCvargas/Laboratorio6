#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define ELEMENTS 5

int main()
{

     S_Persona arrayPersona[ELEMENTS];
    char seguir='s';
    int opcion=0,  i, emptyStrutc, alta;





    emptyStrutc = initPersona(arrayPersona, ELEMENTS);
    /*for (i = 0; i<ELEMENTS ; i++)
    {
        printf("%d\n", arrayPersona[i].flag);
    }*/
    alta = addPersona(arrayPersona, ELEMENTS, 12345678,"Eliana", 28);
    for (i = 0; i<ELEMENTS ; i++)
    {

        printf("%s\n %d\n %d\ \n", arrayPersona[i].nombre,arrayPersona[i].dni, arrayPersona[i].edad);
        break;

    }

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:

                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
