
#include <stdlib.h>
#include <stdio.h>

struct nodo { 
  int dato;
  nodo *siguiente; 
};
int  agregarPila (nodo *, int & );
int sacarPila(nodo *,int  );


 int main(){
   int numero=0;
  nodo *pila;
  printf("dijite un numero , para la pila!! " );
  scanf("%d ",&numero );
  agregarPila(pila,numero );
  printf("\n dijite un segundo  numero , para la pila!! " );
  scanf("%d ",&numero );
  agregarPila(pila,numero );  
  printf ("\n sacando elementos de la pila");
  while (pila != NULL )
     printf( " %d ",numero   );

    sacarPila(pila,numero );
   
    if (pila!=NULL ){
      printf( "el dato %d ",numero   );
      printf(" ," );
    }
    else {
      printf("\n  %d ",numero   );
      printf(" ." );
    }
  }


 int  agregarPila (nodo *pila, int &d){
   nodo *nodo1 = (struct nodo *)malloc(sizeof(struct nodo)); 
   nodo1 -> dato=d;
   nodo1-> siguiente= pila;
   pila = nodo1;
   printf("el elmento a sido asignado a la pila %d  ",d );

  }


  int sacarPila (nodo *pila,int d ){
    nodo *aux =pila;
    d = aux -> dato;
    pila = aux-> siguiente;
    free(aux); 

  } 
