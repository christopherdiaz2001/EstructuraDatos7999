#include <iostream>
#include <ctime>

class Fecha{
    public:
        tm *añadirDias(int dias);
        void mostrarFechas(int plazos, int diaMes);
};