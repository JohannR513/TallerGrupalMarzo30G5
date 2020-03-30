#include <stdio.h>
#include <string.h>

typedef struct paciente{
	char nombre[ 15 ];
	int edad, cedula, tipoSangre;
}paciente;

typedef struct donaciones{
	char nombre[ 15 ];
	int edad, cedula, tipoSangre;
}donaciones;

typedef enum tipoSangre{
   	APOS = 1,
   	BPOS = 2,
   	OPOS = 3,
   	ABPOS = 4,
   	ANEG = 5,
   	BNEG = 6,
   	ONEG = 7,
   	ABNEG = 8
}tipoSangre;

int menu();

void agrgarP();

void eliminarP();

void agregarD();

void eliminarD();

void transfusion();


