#include<stdio.h>

  int main(){
    int array[4]={1,2,3,4};
    int *punteroA;
    punteroA=array;
    for(int d=0;d<4;d++){
      printf( "\n el valor del puntero es %d  ",*punteroA); 
      punteroA++;
    }

   }
