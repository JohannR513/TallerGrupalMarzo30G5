#include <stdio.h>
#include <string.h>

#define CAP 10

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

typedef struct donante
{
   char name[ 20 ];
   tipoSangre sangre;
   int edad;
   int donacion;
}donante;

void donador( donante* punt );

void IngresarD( donante matriz[ ][ CAP ], int* RH, int cap );

void muestras( int* tipo );

void buscarSangre( donante matriz[ ][ CAP ], int* RH );

void donar( donante matriz[][CAP], int *tipo, int cap );
