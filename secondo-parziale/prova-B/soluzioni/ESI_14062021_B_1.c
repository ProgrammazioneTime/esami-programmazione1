#include<stdio.h>
#define DIM 10
// prototipi
int conta(int *, int);
int tuttiminori(int *,int,int, int);

int main(){
  int a[]={2,4,3,5,6,7,5,6,6,8};
  int b[]={1,3,5,7,9,1,3,5,7,9};
  int r;
  int num;
  
  r=conta(a,DIM);
  printf("Ci sono %d sequenze di valori dispari nell'array\n", r);
  r=conta(b,DIM);
  printf("Ci sono %d sequenze di valori dispari nell'array\n", r);
  printf("\nInserisci un valore: ");
  scanf("%d",&num);
  r=tuttiminori(a,DIM,0,num);
  printf("\nEsito: %d",r);
  
}

//conta le sequenze, anche di un solo elemento, di valori dispari, -1 se non esistono
int conta(int *val,int dim){
	int seq=0;
	int i=0;
	
	while(i<dim){
		if(*(val+i)%2!=0 && (i==0 || *(val+i-1)%2==0))
			seq++;
		i++;
	}
	if(seq>0)
		return seq;
	else return -1;
	
}
		
/* 
funzione RICORSIVA: restituisce 1 se tutti gli elementi dell'array sono minori di k, 0 altrimenti
*/	
int tuttiminori(int *a, int dim, int pos,int k){
	if(pos==dim)
		return 1;
	if(*(a+pos)>=k)
		return 0;
	else return tuttiminori(a,dim,pos+1,k);
			
}	