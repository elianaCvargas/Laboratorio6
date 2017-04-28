#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int initPersona(S_Persona* persona, int length)
{
    int retorno = 0;
    int i;
    for (i = 0; i<length ; i++)
    {
        persona[i].flag = 0;
    }
 return retorno;
}

int addPersona(S_Persona* persona, int length, int dni, char name[],int edad)
{
    int retorno = -1, i;

    for (i = 0; i<length ; i++)
    {
        if (persona[i].flag == 0)
        {
            strcpy(persona[i].nombre, name);
            persona[i].dni = dni;
            persona[i].edad = edad;
            persona[i].flag = 1;
            retorno = 0;
            break;
        }
    }
 return retorno;
}

/*void cargarPersona(S_Persona personas[], int index, int id)
{
    printf("nombre director");
    scanf("%s", directores[index].nombre);

    printf("pais director");
    scanf("%s", directores[index].paisOrigen);

    printf("fecha nacimiento director");
    scanf("%s", directores[index].fechaNac);

    directores[index].flagFree=0;
    directores[index].id = id;
}*/
