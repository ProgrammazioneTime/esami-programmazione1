#include<stdio.h>
#define DIM 10
// prototipi
int conta(char *, int*);
void cambia(char *, int);

int main(){
  char frase[]="Oggi conta tutte le doppie in questa frase";
  char frase2[]="Qui non ci sono ripetizioni";
  int doppie;
  int parole=0;
  
  doppie=conta(frase,&parole);
  printf("\nCi sono %d doppie e %d parole in %s",doppie,parole,frase);
  parole=0;
  doppie=conta(frase2,&parole);
  printf("\nCi sono %d doppie e %d parole in %s",doppie,parole,frase2);
  cambia(frase,0);
  printf("\n La frase diventa: %s",frase);
  cambia(frase2,0);
  printf("\n La frase diventa: %s",frase2);
}

//conta restituisce il numero di doppie e scrive nel parametro word il numero di parole
int conta(char *f,int *word){
	int d=0;
	int i=0;
	
	while(*(f+i)!='\0')
	{
			if(i>0 && *(f+i)==*(f+i-1))
				d++;
			if(*(f+i)==' ')
				(*word)++;
			i++;
	}
	(*word)++; // aggiungo 1 quando trovo il terminatore
	return d;
}
		
/* 
funzione RICORSIVA che sposta a destra di una posizione tutti i caratteri della stringa, a partire da pos, l'ultimo carattere - non terminatore - diventa il primo	
NON USARE ARRAY DI SUPPORTO
*/	
void cambia(char *f,int pos){
	char tmp;
	//caso base: sono all'ultimo elemento
	if(*(f+pos+1)=='\0')
		return;
	else{
		tmp=*(f+pos+1);
		*(f+pos+1)=*f;
		*f=tmp;
		cambia(f,pos+1);
	}
}	