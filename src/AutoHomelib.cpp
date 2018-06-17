/**!  Libreria de funciones del proyecto AutoHome
      $Author Alejandro Gonzalez Gonzalez-Regueral
      $date 16/06/2018
      $revision
      */
#include <vector>

int average(void vData, int iSize)
{
  int iData = static_cast<int> vData;
  //static int i=0;     //!<Almacen estatico para la inicializacion
  std::vector<int> vecData;
  //!< Reserva estacio en el vector
  vecData.reserve(iSize);
  //!< por cada bucle de ejecucion almacena un Valor
  vecData.push_back(iData);

  //!< Realiza la media de todos los valores
  for (j=0; j<vecData.size(); j++)
  {
    iAux = iAux + vecData[i]; //!< sumatorio de datos del array
  }
  iAux = iAux/iSize;  //!<Resultado de la media

  if(vecData.size()>=iSize) //Si el tamaño del contenedor es mas grande que el argumento de tamañp
  {
    //Buscar la manera de desalojar el primer espacio del contenedor
    // y aplicar el siguiente (FIFO)
    //Buscar la solucion aqui
  }
  return iAux;      //Devuelve la media calculada.
}
