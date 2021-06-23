#include<stdio.h>
#define N 10
void codifica(char [], int, int);
// altri prototipi se necessario

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



void codifica(char a[], int dim, int k){




			
}	