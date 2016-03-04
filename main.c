#include <stdio.h>

enum DiasSemana {
    Domingo, Lunes, Martes, Miercoles, Jueves, Viernes, Sabado
};

int main(int argc, const char * argv[]) {

    enum DiasSemana dia;

    for (dia = Domingo; dia <= Sabado; ++dia)
    {
        printf("%d, ", dia);
    }
    return 0;
}
