#include <teacher.h>

//!< Constructor por defecto de Teacher

//Teacher::Teacher() : Person(int iEdad, sNombre)
Teacher::Teacher(int iEdad, std::string sNombre)
  : Person(iEdad, sNombre)
{
  cout << "Soy el profesor y me llamo "
  << this->sNombre
  << " y tengo "
  << this->iEdad
  << endl;
}

//!< Define el destructor
Teacher::~Teacher()
{
  cout << "Soy el profesor y me voy" << endl;
}
