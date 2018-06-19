set(SOURCES main.cpp
            sensor.cpp
            analogicSensor.cpp
            digitalSensor.cpp)
#Añade la librearia sampleLib.a al target
add_library(AutoHomelib STATIC AutoHomelib.cpp)

#Genera el ejecutable
add_executable(AutoHome
  ${SOURCES})

#Vincula la libreria creada sampleLib al ejecutable sampleLib
target_link_libraries(AutoHome AutoHomelib)
add_dependencies(AutoHome AutoHomelib)
