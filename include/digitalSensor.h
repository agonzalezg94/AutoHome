/**!
    $Author
    $date
    $revision

    @class AnalogicSensor
    @brief Hereda de la clase Sensor. Se realiza para modelizar sensores analogicos
    con transductores
*/
#ifndef DIGITALSENSOR_H
#define DIGITALSENSOR_H

#include <AutoHomelib.h>
#include <sensor.h>

class DigitalSensor : public Sensor
{
  //!< Atributos y metodos privados
private:
  //!< Atributos y metodos protegidos
    bool bData;   //!< Valor del dato leido por el sensor.
protected:
  //!< Atributos y metodos publicos
  bool getValue();
public:
  DigitalSensor();  //!<Constructor por defecto

  ~DigitalSensor(); //!<Destructor por defecto
  DigitalSensor(stSensorParameters _stParameters); //! Constructor con parametros heredados
  DigitalSensor(BYTE _byType);  //! Constructor definido solo por el tipo

  /** @function setData()
      @brief  Da valor al atributo privado bData
      @param[in]  _bData : bool. Valor a dar
      @return void
      */
  void setData(bool _bData);
  /** @function getData()
      @brief  devuelve atributo privado bData
      @return bool. Valor del atributo bData
      */
  bool getData();

};

#endif //DIGITALSENSOR_H
