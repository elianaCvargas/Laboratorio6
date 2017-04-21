 struct{
    int peliculaID;
    int directorID;
    char titulo;
    int year; //Preguntar  por tipo de dato  fecha
    char paisOrigen;
   //int estado; el  estado  se lo  ponemos al ID
    int flagFree;

}typedef   Pelicula;






 struct{
    int directorID;
    char nombre[50];
    char fechaNacimiento[20]; //Preguntar  por tipo de dato  fecha
    char nacionalidad[50];
    int flagFree;
}typedef  Director;

void AltaDirector(Director directores[], int index,  int directorID );
void IniciarArray_D(Director directores[], int len);
int BuscarLugarVacio_D(Director directores[], int len);
int BuscarDirectorPorID(Director director[], int len, int datoID);

void AltaPeliculas(Pelicula peliculas[], int index,  int peliculaID );
void IniciarArray_P(Pelicula peliculas[], int len);
int buscarLugarVacio_P(Pelicula pelicula[], int len);
int BuscarPeliculasPorID(Pelicula pelicula[], int len, int datoID);

