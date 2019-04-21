#include<stdio.h>
#include <stdlib.h>
int contar();




int main(){
 
     
    
    printf("lo que hay en el archivo es %s y %d");
   

   
  
}

int contar(){
  char d;
  int conteo=0;
  FILE *puntero;
  puntero=fopen("/home/danielgc7/Documentos/Elicaa.txt","r" );
  while(feof(puntero)==0){
    d=getc(puntero);
    conteo++;
    
  }
  fclose(puntero);
  return (conteo);

}
