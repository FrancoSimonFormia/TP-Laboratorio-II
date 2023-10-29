#ifndef GESTORCARRERA_H_INCLUDED
#define GESTORCARRERA_H_INCLUDED
#include "Carrera.h"
#include "Archivo.h"
#include "Mensajero.h"


class GestorCarrera {

public:

    GestorCarrera(std::string nombre) : archivoCarreraEnCurso(nombre) {
    };
    void modificarRegistro();
    void asignarDatosDesdeVector(const std::vector<Carrera>& datos);
    void cargarManual();

private:

    Archivo<Carrera> archivoCarreraEnCurso;
    Carrera datosCarrera;
    Mensajero _mensajero;
};

#endif // GESTORCARRERA_H_INCLUDED

