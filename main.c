#include "sangre.h"

int main()
{
    donante matriz[ 8 ][ CAP ];
    int tipo[ 8 ] = { };
    int RH[ 8 ] = { };
    int cap;
    printf( "Capacidad: " );
    scanf( "%d", &cap );

    int opc;
    do
    {
        opc = menu( );
        switch ( opc ){
            case 1:
                IngresarD( matriz, RH, cap );
                break;
            case 2:
                muestras( tipo );
                break;
            case 3:
                buscarSangre( matriz, RH );
                break;
            case 4:
                donar( matriz, tipo, cap );
                break;
            case 0:
                break;
            default:printf( "Opcion invalida\n" );
                break;
        }
    } while ( opc != 0 );
    printf( "Gracias por venir :)" );
    return 0;
}
