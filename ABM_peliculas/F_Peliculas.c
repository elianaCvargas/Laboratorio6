#include "Prototipos.h"
void IniciarArray_P(Pelicula peliculas[], int len)
{
    int i;
    for(i  = 0; i<len; i++)
    {
        peliculas[i].flagFree = 0;
    }
}

 void AltaPeliculas(Pelicula peliculas[], int index,  int peliculaID )
 {
    printf("Ingresar Titulo: ");
    scanf("%s", peliculas[index].titulo);

    printf("Ingresar Pais: ");
    scanf("%s", peliculas[index].paisOrigen);

    printf("Ingresar Fecha Nacimiento: ");
    scanf("%s", peliculas[index].year);

    peliculas[index].flagFree = 1;
    peliculas[index].peliculaID =  peliculaID;

 }

int buscarLugarVacio_P(Pelicula pelicula[], int len)
{
    int retorno = -1;
    int i;
    for ( i  = 0; i < len; i++)
    {
        if(pelicula[i].flagFree == 0)
        {
            return i;
        }
    }
    return retorno;
}

int BuscarPeliculasPorID(Pelicula peliculas[], int len, int datoID)
{
    int retorno = -1;
    int i;
    for(i  = 0; i <len; i ++)
    {
        if(peliculas[i].flagFree == datoID && peliculas[i].flagFree == 0)
        {
            return datoID;
        }
    }
    return retorno;
}

void imprimirPeliculas(Pelicula peliculas[], int len_P, Director directores[], int len_D )
{
    int i;
    for(i  = 0; i<len_P; i++ )
    {
        if(peliculas[i].flagFree==0)
        {
            int directorID = peliculas[i].directorID;
            int indexDirector = BuscarDirectorPorID(directores,len_D,  directorID);

            printf("%s\t%s", peliculas[i].titulo, directores[i].nombre);//podemos agregar  el  id de la pelicula para mostrar
        }

    }
}
