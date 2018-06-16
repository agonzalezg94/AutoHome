#include <person.h>

//!<  Constructor por defecto
Person::Person()
{
  this->sNombre = "Elena Mayoral";
  this->iEdad    = 23;
  cout << "Soy " << this->sNombre << " y tengo " << this->iEdad << " anios " << endl;
}

//!< Segundo constructor. Pasa como parametro la edad y el Nombre
Person::Person(int iEdad, std::string sNombre)
{
  this->iEdad = iEdad;
  this->sNombre = sNombre;
  cout << "Hola, mi nombre es "
  << this->sNombre
  << " y tengo "
  << this->iEdad
  << " anios." << endl;
}
//!< Destructor
Person::~Person()
{
  cout << "Soy " << this->sNombre << ". Adios" << endl;
}

//!< Metodo Habla. Muestra mensaje por pantalla
void Person::Habla() {
  /* code */
  cout << "Hola, soy" << this->sNombre << endl;
}

//!< Metodo Cuenta. Realiza la media de 2 valores y la muestra por pantalla
void Person::Cuenta()
{
  int iAux=0;
  iAux = media(4,6);
  cout << "La media de 4 y 6 es: " << iAux << endl;
}

//!< Implementacion del metodo de incremento de años
int Person::cuentaAnios(int iEdad, int iIncAnios)
{
  int iAux=0;
  iAux = iEdad + iIncAnios;
  cout << "Ahora tengo " << iEdad << " anios"
  << " y si le sumo " << iIncAnios << " tendre "
  << iAux << " anios " << endl;
}

//!< Metodo para forzar la iEdad
void Person::setEdad(int _iEdad)
{
  this->iEdad = _iEdad;
}

//!< Metodo para obtener la iEdad
int Person::getEdad()
{
  return this->iEdad;
}
