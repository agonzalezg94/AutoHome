/**!  Este es un ejemplo para crear una libreria.
    Voy a añadir funciones sencillas para empezar y focalizar en conseguir
    compilar la librearia y asociarla al target.
    Aqui solo voy a definir la implementacion. Los prototipos seran definidos
    en el header.*/

//!< Implementacion de la funcion de media
int media(int iVal1,    //Valor 1 de la media
          int iVal2)    //Segundo valor de la media
{
  int iAverage=0;   //Declaracion e inicializacion de la variable de calculo de media
  iAverage  = ((iVal1+iVal2)/2);  //Calculo de la media
  return iAverage;  //Devuelve el calculo
}
