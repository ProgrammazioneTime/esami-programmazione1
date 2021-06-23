#include<stdio.h>
#define N 10
void codifica(char [], int, int);
// altri prototipi se necessario

int somma(int);

int main(){
	char a[]={'1','a','Z','d','8','1','y','e','c','a'};
	int i;
	int num;
	printf("\n Inserisci un intero non negativo: ");
	do{
		scanf("%d",&num);
	}while(num<0);
	codifica(a,N,num);
	printf("\n");
	for(i=0;i<N;i++)
		printf("%c ",a[i]);
	
	return 0;
		
}

int somma(int n){
	int s=0;
	
	if(n==0)
		return 0;
	while(n>0){
		s+=n%10;
		n=n/10;		
	}
	
	return s;
}

void codifica(char a[], int dim, int k){
	int r;
	int i;
	
	r=somma(k);
	printf("\n Somma cifre %d vale: %d",k,r);
		// cambio i primi r valori (ma al massimo sono dim)
		for(i=0;i<r && i<dim;i++)
			if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
					a[i]++;
			else a[i]--;
			
}	