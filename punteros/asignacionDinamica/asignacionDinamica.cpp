#include<stdio.h>
#include<stdlib.h>

int numDatosP=0;
int *puntero;

void recivirDatos();
void escrivirDatos();



int main(){
  int i=0;
  recivirDatos();
  escrivirDatos();
  free(puntero);
  printf("\ny ahora el valor del puntero es !!%d",puntero[1]);
  
}


void recivirDatos(){

  printf("escrivar la cantida de datos " );
  scanf("%d",&numDatosP );
  puntero=  (int*) calloc(numDatosP, sizeof(int));

  for( int i=0;i<numDatosP;i++){
    printf("escriva los datos " );
    scanf("%d",&puntero[i]); 


  }
  

}
void escrivirDatos(){
  printf("mostrando los datos almasenados " );
  for( int i=0;i<numDatosP;){
    printf(" %d,",puntero[i] );
    i++;
      

  }
  
 }
