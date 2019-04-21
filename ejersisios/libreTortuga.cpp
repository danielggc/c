#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int *liebre ();
int *tortuga();

int main () {
  int *datoL =0;
  datoL= liebre();
  int *datoT=0;
 
    }


int *tortuga(){
  int *ptrT =0;
  int dato=0;
  int contador=0;
  int resivido=0;
    dato = rand() % (4 - 1);
    printf("el numero es %d ",dato);   
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

int  *liebre (){
  int *ptrL=0;
  int dato1=0;
  int contador1=0;
  int resivido1=0;
    dato1 = rand() % (6- 1);
    printf("el numero es %d ",dato1);   
    if(dato1==1){
	dato1=0;
      }
    if(dato1==2){
	dato1 =9;
      }
    if(dato1==3){
	dato1 =-12;
      }
    if(dato1==3){
	dato1 =1;
      }
    if(dato1==3){
	dato1 =-2;
      }
   if(dato1<0)dato1=0;
   resivido1=dato1+resivido1 ;
   contador1++;
   for(int d=0;d<2;d++){
     ptrL=&contador1;
     ptrL=ptrL+1;
     ptrL=&resivido1;
     
   }
   return ptrL;
 }
