#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#include<math.h>
int main(){
  int datos=3;
  int dato =2;
  int valor =0;
  char cadena1[]={"2789"};
  char tramitir[]={""};
  tramitir[0]={cadena1[0]};
  char *cadena[10]={};
  cadena[0]=&cadena1[2];
  valor=atoi(cadena[0]);
  printf(" %d",valor);



  return 0;
}
