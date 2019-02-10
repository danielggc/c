#include<stdio.h>
#include <stdlib.h>


int main(){
  int d=0;
  FILE *puntador ;
  char cadena='c';
  char recivir[25];
  puntador=fopen("achivwqo.txt","w");
  if (puntador==NULL){fputs ("File error",stderr); exit (1);}
  else{
    printf("el arcivo si esite y su direccion es %p",puntador);
    fputs(" ",puntador);
    while (feof(puntador)==0){
     fgets(recivir,25,puntador);
     printf ("%s ", recivir);
    }
  }
 

  
  fclose(puntador);


}
