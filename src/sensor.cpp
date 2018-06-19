#include <sensor.h>

//!<  Implementar aqui los metodos de las definiciones en sensor.h


//TODO

//!<  Constructor por defecto
Sensor::Sensor()
{
  this->stParameters.byType   = SENSOR_TYPE_UNKNOW;
  this->stParameters.flScope   = NOT_FLOAT_NUMBER;
  this->stParameters.flOffset  = NOT_FLOAT_NUMBER;
}

/** Constructor Sensor() con tipo
    @param[in]  _byType : BYTE: tipo de sensor. puede ser discreto o analogico
*/
Sensor::Sensor(stSensorParameters _stParameters)
{
  this->stParameters.byType  = _stParameters.byType;
  this->stParameters.flScope  = _stParameters.flScope;
  this->stParameters.flOffset = _stParameters.flOffset;
}

Sensor::Sensor(BYTE _byType)
{
  this->stParameters.byType  = _byType;
  this->stParameters.flScope   = NOT_FLOAT_NUMBER;
  this->stParameters.flOffset  = NOT_FLOAT_NUMBER;

}

Sensor::~Sensor()
{
  //Pensar que realizar en el desctructor
}

int Sensor::checkOutOfRange(int _iValue,      //!<  Valor a chequear
                            int _iMaxValue,   //!<Valor limite maximo
                            int _iMinValue)   //!< Valor limite minimo
{
  if((_iValue > _iMaxValue) ||                //!< Mayor de valor maximo
      (_iValue < _iMinValue))                 //!< Menor de valor minimo
    return SENSOR_OUT_OF_RANGE;
  else
    return SENSOR_AVAILABLE;
}
