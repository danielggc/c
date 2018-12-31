#include<stdio.h>

int main(){
  int dato=3;
  int *puntero=0;
  puntero =&dato;
  printf(" el valor del dato es \n %d",dato);
  printf("\nla direccion de memoria es \n %d  ",&dato );
  printf ("\nel valor del puntero es \n  %d  ",*puntero );
  printf ( "\n la direcion de memoria del putero es \n  %d",puntero);




}
