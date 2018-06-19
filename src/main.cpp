#include <iostream>
#include <sensor.h>
#include <analogicSensor.h>
#include <digitalSensor.h>
#include <vector>

//adicion de la librearia personalizada
#include "AutoHomelib.h"

using namespace std;

int main(int    argc,      //Numero de argumentos de entrada. El nombre del ejecutable cuenta como el primero
        char** argv)     //Array de argumentos de entrada
{

  //pruebas
  stSensorParameters stConf;
  if (argc == 4)
  {
    sprintf(argv[1],"%d",stConf.byType);
    sprintf(argv[2],"%f",stConf.flScope);
    sprintf(argv[3],"%f",stConf.flOffset);
  }
  else
  {
    cout << "Numero de argumentos no esperado" << "\n";
  }
  /*int i=0;
  for (i=0;i<argc;i++)
    cout << "Argumento " << i << ": " << argv[i] << "\n";*/
  DigitalSensor*  oDiSensor = new DigitalSensor(stConf);

  delete oDiSensor;
  //vuelta
  return 0;
}
