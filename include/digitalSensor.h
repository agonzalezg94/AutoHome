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

class DigitalSensor : public Sensor
{
  //!< Atributos y metodos privados
private:
  //!< Atributos y metodos protegidos
protected:
  //!< Atributos y metodos publicos
  int getValue();
public:
  DigitalSensor();  //!<Constructor por defecto

  ~DigitalSensor(); //!<Destructor por defecto

};

#endif //DIGITALSENSOR_H
