#!bin/bash

######### Parametros
buildDir=build/

##########  Ejecucion
echo "Cambiando a directorio $builDir"
cd $buildDir

echo "Limpiando compilacion anterior..."
make clean

echo "Compilando proyecto"
make

echo "Volviendo a directorio de proyecto..."
cd ../

return
