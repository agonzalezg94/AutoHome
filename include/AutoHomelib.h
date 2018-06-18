/**!  Libreria de funciones del proyecto AutoHome
      $Author Alejandro Gonzalez Gonzalez-Regueral
      $date 16/06/2018
      $revision
      */
#ifndef AUTOHOMELIB_H
#define AUTOHOMELIB_H
#include <vector>

int average(int _iData, int _iSize);

//!< Variable tipo byte. 0x00-0xFF
typedef unsigned short BYTE;
//!< Variable tipo WORD. 0x00-0xFFFF
typedef unsigned long WORD;

#define SENSOR_TYPE_DISCRETE  1     //!< Identificador sensor tipo discreto
#define SENSOR_TYPE_ANALOG    2     //!< Identificador sensor tipo analogico
#define SENSOR_TYPE_UNKNOW    0xFF  //!< Tipo desconocido de sensor

//!<  Definicion de valores fuera de rango
#define NOT_BYTE_NUMBER       0xFF
#define NOT_WORD_NUMBER       0xFFFF
#define NOT_INT_NUMBER        0xFFFF
#define NOT_DWORD_NUMBER      0xFFFFFFFF
#define NOT_DOUBLE_NUMBER     0xFFFFFFFF

//!< Errores
#define SENSOR_OUT_OF_RANGE   -1

//!< CHECKS
#define SENSOR_AVAILABLE      0

/**  Estructura de paramatros del sensor.
  @param  byType : BYTE
  @param  dScope : double : pendiente del escalado del sensor. Escalado en y
  @param  dOffset : double : offset en x del escalado del sensor.
*/
typedef struct
{
  BYTE byType;
  double  dScope;
  double  dOffset;
}stSensorParams;

#endif //AUTOHOMELIB_H
