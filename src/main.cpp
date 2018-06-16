#include <iostream>
#include <person.h>
#include <teacher.h>
#include <vector>

//adicion de la librearia personalizada
#include "sampleLib.h"

using namespace std;

int main(void) {

  int iEdadPer1=0;
  std::cout << "Hellow World!" << '\n';
  int i=0;
  //declaracion del vector contenedor de profesores
  std::vector<Teacher *> oProfesor;
  //reserva espacio en memoria antes de inicializacion
  oProfesor.reserve(N_PROFESORES);
  //Person oPer1;
  //oPer.Habla();
  Person* oPer1 = new Person;
  oPer1->Habla();
  oPer1->Cuenta();
  oPer1->setEdad(30); //Fuerza la edad
  iEdadPer1 = oPer1->getEdad();
  //iEdadPer1 = oPer1->iEdad;
  oPer1->cuentaAnios(iEdadPer1,4);

  //Definicion del objeto Teacher
  //Teacher* oProfesor = new Teacher(24, "Antonio");
  //Definicion de 3 profesores
  //Teacher* oProfesor[N_PROFESORES];
  for(i=0; i<N_PROFESORES; i++)
    oProfesor.push_back(new Teacher(aiEdadProfesores[i], asNombreProfesores[i]));


  //Eliminamos de memoria los punteros a objetos
  for(i=0; i<N_PROFESORES; i++)
  {
    delete oProfesor[i];
    oProfesor.pop_back();
  }


  delete oPer1;

  //vuelta
  return 0;
}
