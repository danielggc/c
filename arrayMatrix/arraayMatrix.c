#include<stdio.h>
#include <string.h>
#include <stdlib.h>

  int main(){
    char respuesta[10];
    int l=0;
    int num=0;
    int valor=0;
    int x=0;
    int e=0;
    printf("\n escriva porfavor la cantidad de datos ");
    scanf(" %d",&x);
    e=x;
    int matrix[x][x];
    int arrayColumna[]={};

    int dato=0;
    for(int f=0;f<x;f++){
      for(int i=0;i<x;i++){
	 printf("\n escriva los datos de la fila %d , en orden ",f);
         scanf("%d",&dato);
         matrix[f][i]=dato;
        
      }
   }
  printf("\n si quiere  ver los datos guardado digite si o no \n");
  scanf("%s",respuesta);
  if (strcmp( respuesta,"si")==0){
    printf(" \n si quiere ver los todos escriva: todas y si quiere ver las  columnas escriva :columnas ");
    char respuesta[]="";
    scanf("%s",respuesta);
    if(strcmp(respuesta,"todas")==0 ) {
      for(int g=0;g<x;g++){
        for(int d=0;d<x;d++){
           printf(" %d ,",matrix[g][d]);
        }
      } 
    }
   else { 
     printf("\n escriva el numero de la columna y al finalisar escriva fin ");
     char respuesta[]="";
     while(strcmp(respuesta,"fin")!=0){
       scanf("%s",respuesta);
       if (strcmp(respuesta,"fin")==0);
         else {  
	   num = atoi(respuesta );
	   printf("%d",num);
	   arrayColumna[l]=num;
	   l++;
	   char respuesta[]="";
         } 
       }
	
         
  l=(l-1);
  printf("estos son los datos de las columnas solisitadas ");
  for(int d=0;d<=l;d++){
    valor =arrayColumna[d];
    for(int f=0;f<e;f++){
      printf(" %d ,",matrix[valor][f]);
    }   
  }
 }
 }    
 else printf("gracias por depositar sus datos");
 }
