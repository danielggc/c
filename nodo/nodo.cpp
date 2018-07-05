#include<stdlib.h >
#include<conio.h >
#include<stdio.h>
struct nodo { 
int dato;
nodo *siguiente; 
}; 

void agregarPila (nodo *&pila, int d){
 nodo *nodo1 = new nodo ();
 nodo1 -> dato=d;
 nodo1-> siguiente= pila;
 pila =nodo1;
 }


int main(){
 int numero;
 nodo *pila = NULL;
 printf("dijite un numero , para la pila!! " );
 scanf("%d ",&numero );
 
 agregarPila(pila,numero );
 
}
