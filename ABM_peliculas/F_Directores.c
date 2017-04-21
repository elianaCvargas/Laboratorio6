#include "Prototipos.h"
void IniciarArray_D(Director directores[], int len)
{
    int i;
    for(i  = 0; i<len; i++)
    {
        directores[i].flagFree = 0;// indico  que esta libre

    }

}


int BuscarDirectorPorID(Director directores[], int len, int datoID)
{
    int retorno = -1;
    int i;
    for(i  = 0; i <len; i ++)
    {
        if(directores[i].flagFree == datoID && directores[i].flagFree == 0)
        {
            return datoID;
        }
    }
    return retorno;
}



 void AltaDirector(Director directores[], int index,  int directorID )
 {
    printf("Ingresar nombre: ");
    scanf("%s", directores[index].nombre);

    printf("Ingresar Pais: ");
    scanf("%s", directores[index].nacionalidad);

    printf("Ingresar Fecha Nacimiento: ");
    scanf("%s", directores[index].fechaNacimiento);

    directores[index].flagFree = 1;
    directores[index].directorID =  directorID;

 }

int BuscarLugarVacio_D(Director directores[], int len)
{
    int retorno = -1;
    int i;
    for ( i  = 0; i < len; i++)
    {
        if(directores[i].flagFree == 0)
        {
            return i;
        }
    }
    return retorno;
}


