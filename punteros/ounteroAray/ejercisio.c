#include<stdio.h>

int main(){

    int datos[6]={1,2,3,4,5};
    int* punteroD;
    punteroD=datos;
    
    for(int d=0;d<4;d++){
   
      if(*punteroD%2==0 ){
         printf( "\n el valor del puntero es %d \n y la direccion de memoria es   %d  \n y es par",*punteroD,punteroD);

      } 
      else{
        printf( "\n el valor del puntero es %d\n y la direccion de memoria es \n %d y es inpar",*punteroD,punteroD);
      }
        punteroD++;
      }
      
     }

  

