/**!
    $Author
    $date
    $revision

    @class AnalogicSensor
    @brief Hereda de la clase Sensor. Se realiza para modelizar sensores analogicos
    con transductores
*/
#ifndef ANALOGICSENSOR_H
#define ANALOGICSENSOR_H

#include <AutoHomelib.h>
#include "sensor.h"

class AnalogicSensor : public Sensor
{
  //!< Atributos y metodos privados
private:
  //!< Atributos y metodos protegidos
  int iData;
protected:
  //!< Atributos y metodos publicos
  int getValue();
public:
  AnalogicSensor(); //!< Constructor por defecto
  AnalogicSensor(stSensorParameters _stParameters); //! Constructor con parametros heredados
  ~AnalogicSensor();  //!<Destructor por defecto
  /** @function setData()
      @brief  Da valor al atributo privado bData
      @param[in]  _iData : int. Valor a dar
      @return void
      */
  void setData(int _iData);
  /** @function getData()
      @brief  devuelve atributo privado iData
      @return int. Valor del atributo bData
      */
  int getData();
};

#endif //ANALOGICSENSOR_H
