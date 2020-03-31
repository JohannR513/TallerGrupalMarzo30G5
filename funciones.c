#include "sangre.h"
#define FILAS 8
#define COLUMNAS 5

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
   
int menu( ){
	
	int opc;
    printf( "MENU:\n");
    printf( "=====================\n" );
    printf( "1: Ingresar donador\n" );
    printf( "2: ver muestas\n" );
    printf( "3: transfusio\n" );
    printf( "4: agregar paciente\n" );
    printf( "0: Salir\n" );
    scanf( "%d", &opc );

    return opc;

do{
   opc = menu( );
	switch ( opc ){
		default: printf( "Ingresa una opcion valida" );
			
		 
	}while( opcion != 0 );

}

}


















