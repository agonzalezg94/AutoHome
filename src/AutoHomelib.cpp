/**!  Libreria de funciones del proyecto AutoHome
      $Author Alejandro Gonzalez Gonzalez-Regueral
      $date 16/06/2018
      $revision
      */
#include <vector>
#include <AutoHomelib.h>

int average(int _iData, int _iSize)
{
  //int iData = static_cast<int> vData;
  int i=0, iAux=0, j=0;     //!<Almacen estatico para la inicializacion
  std::vector<int> vecData;
  //!< Reserva estacio en el vector
  vecData.reserve(_iSize);
  //!< por cada bucle de ejecucion almacena un Valor
  vecData.push_back(_iData);

  //!< Realiza la media de todos los valores
  for (j=0; j<vecData.size(); j++)
  {
    iAux = iAux + vecData[i]; //!< sumatorio de datos del array
  }
  iAux = iAux/_iSize;  //!<Resultado de la media

  if(vecData.size()>=_iSize) //Si el tamaño del contenedor es mas grande que el argumento de tamañp
  {
    //Buscar la manera de desalojar el primer espacio del contenedor
    // y aplicar el siguiente (FIFO)
    //Buscar la solucion aqui
  }
  return iAux;      //Devuelve la media calculada.
};
