/**!
    $Author
    $date
    $revision
*/

#ifndef SENSOR_H
#define SENSOR_H

/**  Definicion de la clase sensor*/
class Sensor
{
  /**Atributos privados de la clase \class sensor*/
private:

/**Atributos protegidos de la clase \class sensor*/
protected:

  /** @brief Medoto getValue(). Dicho metodo almacena la medida que esta tomando el Sensor
    Este será puramente virtual pues en los distintos sensores heredados tomará una forma
    En sensores analógicos devolvera un valor double o integer mientras que en los
    discretos devolverá valores true o false
    @param none
    @return Devuelve el valor del sensor. Si es analogico devuelveun integer. Si es discreto true o false*/
    void getValue();
/**Atributos publicos de la clase \class sensor*/
public:
  //!<Constructor por defecto
  Sensor();
  //!<Destructor por defecto
  ~Sensor();

};

#endif  //SENSOR_H
