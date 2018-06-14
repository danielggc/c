#include<stdio.h>
int d=0;


  int dividir(int numero  ){
  
    if(numero==0 ){
      return 0 ;
      }
    else {
      return numero ;
      d = dividir/2;
      return d;
     }
    }

  int main(){
    int x;
        printf("ingrece un numero " );
    scanf ("%d ",&x );
    printf ("su numero fue %d \n ",x  );
     printf("y el binario es %d  \n " );
     
     int valores =0;
      valores = dividir(x );
       printf(" %d  ",valores );
	  
	 
    return 0;
    
  }

     
   
   
 
