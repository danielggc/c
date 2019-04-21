#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#include<math.h>
int contar();
int main(){
  int conteo=0;
  int conteoA=0;
  int conteoT=0;
  int conteo2=0;
  
  int verdadero=0;
  char *trasmitir[]={};
  FILE *token;
  token=fopen("google.txt","r");
  int cantidad =0;
  cantidad=contar();
  int  arrayT[cantidad]={};
  int  array[cantidad]={};
  int  array2[cantidad]={};
  char cadena[cantidad]={};
  while(feof(token)==0){
   fgets(cadena,cantidad,token);
   }
  printf(" el texto es : %s",cadena);
  printf ("los numero sacados son :");
    while(conteo<cantidad){
   if (isdigit(cadena[conteo]) == 1){
      trasmitir[0]=&cadena[conteo],
      array[conteoA] =atoi(trasmitir[0]);
      verdadero=1;
      conteo++;
      conteoA++;
       while(isdigit(cadena[conteo])==1){
       if (isdigit(cadena[conteo]) == 1){
	  trasmitir[0]=&cadena[conteo],
          array2[conteo2] =atoi(trasmitir[0]);
	  conteo++;
          conteo2++;

	 
       }
     }
       
   }
   else{
     conteo++;
    
   }
 }
    for(int f=0;f<conteoA;f++){
      printf("%d , ",array[f]);
    }
}

int contar(){
  char d;
  int conteo=0;
  FILE *puntero;
  puntero=fopen("google.txt","r" );
  while(feof(puntero)==0){
    d=getc(puntero);
    conteo++;
    
  }
  fclose(puntero);
  return (conteo);

}
