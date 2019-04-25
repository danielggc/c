#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>
int *liebre (int *ptr);
int *tortuga(int *ptr);

int main () {
  int valorFinal=0;
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
  ptrT=&arrayT[0];
  ptrL=(int*) malloc (3*sizeof(int));
  ptrT=(int*) malloc(3*sizeof(int));
  ptrL=liebre(ptrL);
  ptrL=ptrL-1;
  ptrT=tortuga(ptrT);
  ptrT=ptrT-1;
   while(*ptrT<70){
    if(*ptrL==*ptrT)printf("auch¡¡");
    ptrL=ptrL+1;
    if (*ptrL%70==0){
      ptrL=ptrL-1;
      printf("la posicion de la tortuga es %d y el de la liebres %d  ",*ptrT,*ptrL);
    }
    if(*ptrL>*ptrT&&*ptrL>60){
    while(valorFinal<=0){
      ptrL=liebre(ptrL);
      ptrL=ptrL-1;
      ptrT=tortuga(ptrT);
      ptrT=ptrT-1;
      if(*ptrL>=70&&*ptrT<70){
	valorFinal=70-*ptrT;
	*ptrT=valorFinal+*ptrT;
	printf("gana la tortuga");
      }
    }
    }
    else{
      ptrL=liebre(ptrL);
      ptrT=tortuga(ptrT);
      ptrT=ptrT-1;
     }
    
   }
 
}


int *tortuga(int *ptr){
   int aleatorioT=0;
    int valorPocisionT=0;
    int posicionT=*ptr;
    aleatorioT = 1+rand() % (3-1);
    if(aleatorioT==1){
      valorPocisionT=3;
      }
    else{
      if(aleatorioT==2){
      valorPocisionT=-6;
        }
      else{
        if(aleatorioT==3){
        valorPocisionT =1;
        }

      }
    }
  
    posicionT=valorPocisionT+posicionT;
    *ptr=posicionT;
    ptr=ptr+1;
    int contadorT=*ptr;
    contadorT++;
    *ptr=contadorT;
   
    return ptr;
      
     
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
    *ptr=posicionL;
    ptr=ptr+1;
    int contadorL=*ptr;
    contadorL++;
    *ptr=contadorL;
   
    return ptr;
}
