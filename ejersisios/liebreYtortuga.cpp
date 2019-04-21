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
  ptrL=liebre(ptrL); ptrL=liebre(ptrL);ptrL=liebre(ptrL);ptrL=liebre(ptrL);ptrL=liebre(ptrL);ptrL=liebre(ptrL);ptrL=liebre(ptrL);ptrL=liebre(ptrL);
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
  int dato1=0;
  int resivido1=*ptr;
  printf("··%d··",resivido1);
  dato1 = 1+rand() % (5- 1);
    if(dato1==1){
	dato1=0;
      }
    if(dato1==2){
	dato1 =9;
      }
    if(dato1==3){
	dato1 =-12;
      }
    if(dato1==4){
	dato1 =1;
      }
    if(dato1==5){
	dato1 =-2;
      }
   if(dato1<0)dato1=0;
   resivido1=dato1+resivido1;
   printf(" numero%d,dato %d",resivido1,dato1);
   ptr=&resivido1;
   printf("puntero !%d!",*ptr);
   ptr=ptr+1;
   int contador1=*ptr;
   contador1++;
   ptr=&contador1;
   return ptr;
}
