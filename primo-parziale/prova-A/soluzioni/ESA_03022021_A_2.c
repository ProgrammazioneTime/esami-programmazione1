#include<stdio.h>
#define N 10
void codifica(char [], int, int);
// altri prototipi se necessario

int lung(int);

int main(){
	char a[]={'1','a','Z','d','9','*','z','z','c','a'};
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

int lung(int n){
	int c=0;
	
	if(n==0)
		return 1;
	while(n>0){
		c++;
		n=n/10;		
	}
	
	return c;
}

void codifica(char a[], int dim, int k){
	int r;
	int i;
	
	r=lung(k);
	if(r%2==0){
		for(i=0;i<dim;i++)
			if(a[i]>='a'&& a[i]<='z'){
				if(a[i]=='z')
					a[i]='a';
				else 
					a[i]++;
			}
	}
	else{
		for(i=0;i<dim;i++)
					if(a[i]>='a'&& a[i]<='z'){
						if(a[i]=='a')
							a[i]='z';
						else 
							a[i]--;
					}
	}
}