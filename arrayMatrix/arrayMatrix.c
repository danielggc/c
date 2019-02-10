#include<stdio.h>

  int main(){
    char respuesta[10];
    char comparando=si;
    
    int x=0;
    printf("ecriva porfavor la cantidad de datos ");
    scanf(" %d",&x);
    int matrix[x][x];

    int dato=0;
    for(int f=0;f<x;f++){

      for(int i=0;i<x;i++){
	printf("escriva los datos de la fila %d , en orden ",f);
        scanf("%d",&dato);
        matrix[f][i]=dato;
        
      }
  }


    printf("\n si quiere  ver los datos guardado digite si o no \n");
    scanf("%s",respuesta);

    
   
    
    if (strcmp(respuesta,comparando)==0){
      for(int g=0;g<x;g++){
        for(int d=0;d<x;d++){
	   printf(" %d ,",matrix[g][d]);
        }
      } 
    }
    else printf("gracias por depositar sus datos");


}
