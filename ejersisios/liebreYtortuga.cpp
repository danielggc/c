#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>
int *liebre (int *ptr);
int *tortuga(int *ptr);

int main () {
  int contador=0;
  int arrayL[3];
  int arrayT[3];
  int dato3=0;
  int dato4=0;
  int dato1=0;
  int dato2=0;
  int *ptrL;
  int *ptrT;
  ptrL=&arrayL[0];
  ptrL=(int*) malloc (3*sizeof(int));
  ptrT=(int*) malloc(3*sizeof(int));
  ptrL=liebre(ptrL);
  ptrL=ptrL-1;
  ptrL=liebre(ptrL);
  ptrL=ptrL-1;
  ptrL=liebre(ptrL);
   ptrL=ptrL-1;
  ptrL=liebre(ptrL);
}


int *tortuga(int *ptr){
  int dato=0;
  int contador=0;
  int resivido=0;

    dato = 1+rand() % (5 - 1);
      if(dato==1){
	dato=3;
      }
      if(dato==2){
	dato =-6;
      }
      if(dato==3){
	dato =1;
      }
      if(dato<0)dato=0;
      resivido=dato+resivido ; 
      contador++;
      
     
     }

int  *liebre(int *ptr){
    int aleatorioL=0;
    int valorPocisionL=0;
    int posicionL=*ptr;
    aleatorioL = 1+rand() % (5- 1);
    if(aleatorioL==1){
      valorPocisionL=0;
      }
    else{
      if(aleatorioL==2){
      valorPocisionL=9;
        }
      else{
        if(aleatorioL==3){
        valorPocisionL = -12;
        }
	else{
	  if(aleatorioL==4){
           valorPocisionL =1;
	  }
	  else{
            if (aleatorioL==5){
              valorPocisionL=2;
            }
          }
        }
      }
    }
  
    posicionL=valorPocisionL+posicionL;
    printf("puntero !%d! y el aleatorio es #%d#",*ptr,valorPocisionL);
    *ptr=posicionL;
    ptr=ptr+1;
    int contadorL=*ptr;
    contadorL++;
    *ptr=contadorL;
   
    return ptr;
}
