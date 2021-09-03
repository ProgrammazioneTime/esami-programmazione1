#include<stdio.h>
#define DIM 10
// prototipi
int conta(int *, int);
void shift(int *,int,int);

int main(){
  int a[]={2,4,3,5,6,7,5,6,6,8};
  int b[]={1,3,5,7,9,1,3,5,7,9};
  int r;
  int i;

  r=conta(a,DIM);
  printf("Ci sono %d sequenze di valori pari nell'array\n", r);
  r=conta(b,DIM);
  printf("Ci sono %d sequenze di valori pari nell'array\n", r);
  shift(a,0,DIM);
  printf("\n Array dopo lo shift: ");
  for(i=0;i<DIM;i++)
	  printf("%3d",a[i]);
  shift(b,0,DIM);
  printf("\n Array dopo lo shift: ");
  for(i=0;i<DIM;i++)
	  printf("%3d",b[i]);

}

//conta le sequenze, anche di un solo elemento, di valori pari, -1 se non esistono
int conta(int *val,int dim){

}

/*
funzione RICORSIVA che sposta a destra di una posizione tutti gli elementi dell'array, l'ultimo diventa il primo
NON USARE ARRAY DI SUPPORTO
*/
void shift(int *a,int pos, int dim){

}
