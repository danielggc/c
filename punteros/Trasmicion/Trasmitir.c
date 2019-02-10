#include<stdio.h>
void cambio(float*,float*); 
 
int main (){
  float dato1=2.24;
  float dato2=3.45;  

  printf("el numerodel dato 2 es %f, y el del dato 2 es %f  ",dato1,dato2);
  cambio(& dato1,&dato2);
  printf(" y haora %f , y %f",dato1,dato2);
}



void cambio( float *num1,float *num2){
  float aux =0;
  aux= *num1;
  *num1=*num2;
  *num2=aux;
}

