set(SOURCES main.cpp)

#Añade la librearia sampleLib.a al target
add_library(AutoHomeLib STATIC AutoHomeLib.cpp)

#Genera el ejecutable
add_executable(AutoHome
  ${SOURCES})

#Vincula la libreria creada sampleLib al ejecutable sampleLib
target_link_libraries(AutoHome sampleLib)
add_dependencies(AutoHome sampleLib)
