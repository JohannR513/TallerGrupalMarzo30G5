#include <sangre.h>


int main(){
User mat[8][MAX_CAP];
int counts[8] = {};
int groupSizes[8] = {};

int cap;
printf("Capacidad: ");
scanf("%d", &cap);

do{
 opc = menu( );
switch ( opc ){
   case 1: agrgarP( );
       break;
   case 2: eliminarP( ); 
       break;
   case 3: agregarD( );
      break;
   case 4: eliminarD( );
      break;
   case 5: transfusion( );
      break;
   case 0:
      break;
  default: printf( "Ingresa una opcion valida" );
  }while( opcion != 0 );

}
}
