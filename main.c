#include <stdio.h>

enum DiasSemana {
    Domingo, Lunes, Martes, Miercoles, Jueves, Viernes, Sabado
};

int main(int argc, const char * argv[]) {

    enum DiasSemana dia;

    for (dia = Domingo; dia <= Sabado; ++dia)
    {
        printf("%d \n", dia);
    }
    
    int a = 0;
    
    return 0;
}
