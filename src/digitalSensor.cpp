#include <digitalSensor.h>
#include <AutoHomelib.h>

DigitalSensor::DigitalSensor()
{
  this->bData = false;
}

DigitalSensor::DigitalSensor(stSensorParameters _stParameters)
  : Sensor(_stParameters)
{
  this->bData = false;
  cout << "Creando sensor digital. Parametros: " << "\n"
  << "tipo: " << this->stParameters.byType << "\n"
  << "Ganancia: " << this->stParameters.flScope << "\n"
  << "Escalado: " << this->stParameters.flOffset << "\n";
}

DigitalSensor::DigitalSensor(BYTE _byType)
  : Sensor(_byType)
{
  this->stParameters.byType = _byType;
  cout << "Creando sensor digital. Parametros: " << "\n"
  << "tipo: " << this->stParameters.byType << "\n"
  << "Ganancia: " << this->stParameters.flScope << "\n"
  << "Escalado: " << this->stParameters.flOffset << "\n";
}

DigitalSensor::~DigitalSensor()
{
  //TODO
}

void DigitalSensor::setData(bool _bData)
{
  this->bData = _bData;
}

bool DigitalSensor::getData()
{
  return this-> bData;
}
