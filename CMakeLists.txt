CMAKE_MINIMUM_REQUIRED( VERSION 3.0 )

PROJECT(sample)

#Definicion de las rutas
SET(CMAKE_BINARY_PATH ${PROJECT_SOURCE_DIR}/bin)
SET(CMAKE_INCLUDE_PATH ${PROJECT_SOURCE_DIR}/include)
SET(CMAKE_SOURCE_PATH ${PROJECT_SOURCE_DIR}/src)


#Especifica la ruta de generacion del binario  y libreria
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_PATH})
SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_PATH})

#inclusion del directorio de cabeceras
INCLUDE_DIRECTORIES(${CMAKE_INCLUDE_PATH}
                    ${CMAKE_LIBRARY_OUTPUT_DIRECTORY})

#inclusion del subdirectorio con CMakefile que incluye codigo fuente
ADD_SUBDIRECTORY(${CMAKE_SOURCE_PATH})
