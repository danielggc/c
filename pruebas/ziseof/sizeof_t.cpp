 #include <stdio.h>
 #include <stddef.h>
 #include <stdint.h>
const int dato =5;
int main(void)  double numero=4.3345;
  double *ptr;
  int* ptrArray;
  int array[5]={2,3,42,6};
  ptr=&numero;
  printf("ptr tiene %f,%f",numero,*ptr);
  ptrArray =&array[0];
  for(int i=1;i!=dato;i++){
    printf("el valor es |%d |",*ptrArray); 
    ptrArray=ptrArray+1;
  }
   
   
}
