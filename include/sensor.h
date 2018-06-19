/**!
    $Author
    $date
    $revision
*/

#ifndef SENSOR_H
#define SENSOR_H

#include <AutoHomelib.h>

/**  Definicion de la clase sensor*/
class Sensor
{
  /**Atributos privados de la clase \class sensor*/
private:

/**Atributos protegidos de la clase \class sensor*/
protected:

  /** @brief Medoto getValue(). Dicho metodo almacena la medida que esta tomando el Sensor
    Este será puramente virtual pues en los distintos sensores heredados tomará una forma
    En sensores analógicos devolvera un valor float o integer mientras que en los
    discretos devolverá valores true o false
    @param none
    @return Devuelve el valor del sensor. Si es analogico devuelveun integer. Si es discreto true o false*/
    stSensorParameters  stParameters;
    //void getValue();
/**Atributos publicos de la clase \class sensor*/
public:
  //!<Constructor por defecto
  Sensor();
  //!<Constructor con tipo de sensores
  Sensor(stSensorParameters _stParameters);
  //!<Destructor por defecto
  ~Sensor();
  //! Destructor por Tipo
  Sensor(BYTE _byType);
  /** int checkOutOfRange(int _iValue, int _iMaxValue, int _iMinValue)
    @param[in] _iValue : float : Valor a chequear
    @param[in] _iMaxValue : int : Valor superior de la ventana de rango
    @param[in] _iMinValue : int : Valor inferior de la ventana de rango
    @return : int :
      devuelve -1 si se encuentra fuera de rango
      deveulve 0 si esta dentro de rango
      */
  int checkOutOfRange(int _iValue, int _iMaxValue, int _iMinValue);


};

#endif  //SENSOR_H
