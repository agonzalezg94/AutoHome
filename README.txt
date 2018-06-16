***************	Compilacion con CMAKE	*************

Pasos previos:
Tener un arbol de directorios como el siguiente:
Project
	bin/
	src/
	include/
	build/

1. En el directorio padre del directory build tree ejecutar cmake -H. -Bbuild para generar los ficheros make en el directorio build

2. Ejecutar el comando cmake --build build -- -j3 para generar el binario en bin/
