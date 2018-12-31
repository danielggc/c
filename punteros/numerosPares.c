#include<stdio.h> 



int main(){
  int dato=0;
  printf("digite un valor " );
  scanf("%d  ",&dato );
  if  (dato%2==0){
    printf("el valor %d",dato);
    printf(" es par ,y su direccion de memoria es  %d",&dato );
   }
 
   if  (dato%2!=0){
     printf("el valor %d",dato);
     printf(" es inpar ,y su direccion de memoria es %d",&dato );
   }
  

  }
