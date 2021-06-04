#include<stdio.h>
#define N 10
void cifra(char [], int, int);
// altri prototipi se necessario

int cifrasx(int);

int main(){
	char a[]={'1','a','Z','d','9','*','4','0','2','a'};
	int i;
	int num;
	printf("\n Inserisci un intero non negativo: ");
	do{
		scanf("%d",&num);
	}while(num<0);
	cifra(a,N,num);
	printf("\n");
	for(i=0;i<N;i++)
		printf("%c ",a[i]);
	
	return 0;
		
}

int cifrasx(int n){
	int c;
	
	if(n==0)
		return 0;
	while(n>0){
		c=n%10;
		n=n/10;		
	}
	
	return c;
}

void cifra(char a[], int dim, int k){
	int r;
	int i;
	
	r=cifrasx(k);
	if(r%2==0){
		for(i=0;i<dim;i++)
			if(a[i]>='0'&& a[i]<='9'){
				if(a[i]=='9')
					a[i]='0';
				else 
					a[i]++;
			}
	}
	else{
		for(i=0;i<dim;i++)
					if(a[i]>='0'&& a[i]<='9'){
						if(a[i]=='0')
							a[i]='9';
						else 
							a[i]--;
					}
	}
}