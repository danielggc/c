#include<stdio.h>
   struct edad {
     int edad ;
     char nombre[20];
     char categoria[20 ] ;
   }pendejo_d ={160,"danielgc7 "," siquico  " }, 
    pendejo_s ={28 ," sebcas77","bestia nevada " },
    pendejo_J ={25," Joxe55 ","duende del prado " };


int c;
  int main(){
  
  printf( "1.D \n 2.ss \n 3.J \n" );
  printf("digite el  nuemro de la persona que desea ver  " ); 
  scanf ( " %d",&c );
  if (c==1 ){ printf("la edad de D es %d,el nombre es  %s;su categoria es  %s ", pendejo_d.edad,pendejo_d.nombre,pendejo_d. categoria  );}
  if (c==2 ){ printf("la edad de S es %d,el nombre es  %s;su categoria es  %s ", pendejo_s.edad,pendejo_s.nombre,pendejo_s. categoria  );}
  if (c==3 ){ printf("la edad de JJ es %d,el nombre es  %s;su categoria es  %s ", pendejo_J.edad,pendejo_J.nombre,pendejo_J. categoria  );}
 }
