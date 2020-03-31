#include "sangre.h"

int menu()
{
    int opc;
    printf( "MENU:\n");
    printf( "=====================\n" );
    printf( "1: Ingresar donador\n" );
    printf( "2: ver muestras\n" );
    printf( "3: buscar sangre\n" );
    printf( "4: donar\n" );
    printf( "0: Salir\n" );
    scanf( "%d", &opc );

    return opc;
}

void donador( donante* punt )
{
    int sangre;
    printf( "Nombre: " );
    scanf( "%s", punt->name );
    printf( "edad: " );
    scanf( "%s", punt->edad );

    printf( "Tipo de sangre: \n" );
    printf( "1: A+\n" );
    printf( "2: B+\n" );
    printf( "3: O+\n" );
    printf( "4: AB+\n" );
    printf( "5: A-\n" );
    printf( "6: B-\n" );
    printf( "7: O-\n" );
    printf( "8: AB-\n" );
    scanf( "%d", &sangre );
    punt->sangre = sangre;

    punt->donacion = 0;
}

void IngresarD( donante matriz[ ][ CAP ], int* RH, int cap )
{
    donante punt;
    donador( &punt );

    if ( RH[ punt.sangre ] < cap )
    {
        matriz[ punt.sangre ][ RH [ punt.sangre ] ] = punt;
        RH[ punt.sangre ]++;
    }
    else
    {
        printf( "no se puede donar\n" );
    }
}

void muestras( int *tipo )
{
    int i;
    for ( i = 0; i < 8; i++ )
    {
        switch ( i )
        {
            case 0:
                printf( "A+: " );
                break;
            case 1:
                printf( "B+: " );
                break;
            case 2:
                printf( "O+: " );
                break;
            case 3:
                printf( "AB+: " );
                break;
            case 4:
                printf( "A-: " );
                break;
            case 5:
                printf( "B-: " );
                break;
            case 6:
                printf( "O-: " );
                break;
            case 7:
                printf( "AB-: " );
                break;
        }
        printf( "%d\n", tipo[ i ] );
    }
}


void buscarSangre( donante matriz[ ][ CAP ], int *RH )
{
    int i;
    int sangre;
    printf( "Tipo de sangre: \n" );
    printf( "=====================\n" );
    printf( "1: A+\n" );
    printf( "2: B+\n" );
    printf( "3: O+\n");
    printf( "4: AB+\n" );
    printf( "5: A-\n" );
    printf( "6: B-\n" );
    printf( "7: O-\n" );
    printf( "8: AB-\n" );
    scanf( "%d", &sangre );

    printf( "Donante:\n" );
    for ( i = 0; i < RH[sangre]; i++ )
    {
        printf( "Nombre: %s\n", matriz[ sangre ][ i ].name );
        printf( "edad: %s\n", matriz[ sangre ][ i ].edad );
        printf( "donacion: %d\n", matriz[ sangre ][ i ].donacion );
        printf( "===============\n" );
    }
}

void donar( donante matriz[ ][ CAP ], int *tipo, int cap )
{
    char name[ 10 ];
    int donacion;
    int i, j, num = 0;
    printf( "Nombre: " );
    scanf( "%s", name );
    printf( "donacion: " );
    scanf( "%d", &donacion );

    for ( i = 0; i < 8; i++ )
    {
        for ( j = 0; j < cap; j++ )
        {
            if ( !strcmp( name, matriz[ i ][ j ].name ) )
            {
                matriz[ i ][ j ].donacion += donacion;
                num = 1;
                break;
            }
        }
        
        if ( num )
        {
            tipo[ i ] += donacion;
            break;
        }
    }

    if ( !num )
        printf( "Este usuario no existe\n" );
}
