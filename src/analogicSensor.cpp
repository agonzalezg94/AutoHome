#include <analogicSensor.h>

AnalogicSensor::AnalogicSensor()
{
  this->iData = NOT_INT_NUMBER;
}

AnalogicSensor::AnalogicSensor(stSensorParameters _stParameters)
  : Sensor(_stParameters)
{
  this->iData = NOT_INT_NUMBER;
}

AnalogicSensor::~AnalogicSensor()
{
  //TODO
}

void AnalogicSensor::setData(int _iData)
{
  this->iData = _iData;
}

int AnalogicSensor::getData()
{
  return this-> iData;
}
