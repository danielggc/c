#include<stdio.h>
#include <stdlib.h>  

 int main(){
   float  array[]={ 1100.003, 2101.945,3111.10104 , };
   int fin=0;
   int dato=0;
   float numero=0.0;
   float motor1[]={0};
   float motor2[]={0};
   float motor3[]={0};
   fin=sizeof(array)/4;
 
  
   for(int d=0;d!=fin;d++){
     numero=array[d];
     dato=array[d];
      if (dato>100){
         if(dato<1000){
	    dato=dato/100;
	     if (dato==1){
	       int conteo1=0;
	       numero=numero-1000;
	       motor1[conteo1]=numero;
	       conteo1++;
           }
	  if (dato==2){
	     int conteo2=0;
	     numero=numero-2000;
	     motor2[conteo2]=numero;
	     conteo2++;  
           
	   } 
	  if (dato==3){
	     int conteo3=0;
	     numero=numero-3000;
	     motor3[conteo3]=numero;
	     conteo3++;  
           
	   }
	
         }
	 if (dato>1000){
	   dato=dato/1000;
	   if (dato==1){
	     int conteo1=0;
	     numero=numero-1000;
	     motor1[conteo1]=numero;
	     conteo1++;
           }
	   if (dato==2){
	     int conteo2=0;
	     numero=numero-2000;
	     motor2[conteo2]=numero;
	     conteo2++;  
           
	   } 
	  if (dato==3){
	     int conteo3=0;
	     numero=numero-3000;
	     motor3[conteo3]=numero;
	     conteo3++;  
           
	   } 
	   
	 }
       }
     }

   for(int d=0;d!=1;d++){
     printf("las cordenas  x%f \n la cordena  y%f \n la cordena  z%f",motor1[d],motor2[d],motor3[d]);  
   }
   
 }
