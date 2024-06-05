#include <stdio.h>
#include <string.h>

typedef struct
{
    int horas;
    int minutos;
    int segundos;

}Horario;

typedef struct
{
    int dia;
    int mes;
    int ano;

}Data;

typedef struct
{
    Data data;
    Horario horario;
    char texto[35];

}Compromisso;


int main()
{
    Compromisso compromisso;

    compromisso.data.ano;
    compromisso.data.mes;
    compromisso.data.dia;

    compromisso.horario.horas;
    compromisso.horario.minutos;
    compromisso.horario.segundos;

    compromisso.texto;
}