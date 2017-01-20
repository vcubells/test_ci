#include <stdio.h>

enum DiasSemana {
    Domingo, Lunes, Martes, Miercoles, Jueves, Viernes, Sabado
};

int main() {

    enum DiasSemana dia;

    for (dia = Domingo; dia <= Sabado; ++dia)
    {
        printf("%d \n", dia);
    }
    
    return 0;
}
