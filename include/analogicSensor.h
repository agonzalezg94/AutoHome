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

class AnalogicSensor : public Sensor
{
  //!< Atributos y metodos privados
private:
  //!< Atributos y metodos protegidos
protected:
  //!< Atributos y metodos publicos
  int getValue();
public:
  AnalogicSensor(); //!< Constructor por defecto
  ~AnalogicSensor();  //!<Destructor por defecto

};

#endif //ANALOGICSENSOR_H
