//ESA_03022021_B_3.c


#include <stdio.h>
#include <stdlib.h>
#define N 3

int main(void) {
    float Key;
    float M[N][N];
    
    int i, j, found = 0, riga, colonna;
    
    srand(2);
    //inizializzazioni:
    for (i=0; i<N; i++)
        for (j=0;j<N;j++)
            if(i%2==0)
                M[i][j] = rand()%21;
            else
                M[i][j] = rand()%11;
    
    //Inserimento Key
    printf("Inserire un valore decimale: ");
    scanf("%f", &Key);
    
    //stampa matrice M
    printf("M:\n");
    for (i=0; i<N; i++){
        for (j=0;j<N;j++)
            printf("%5.2f ", M[i][j]);
        printf("\n");
    }
    printf("\n");
    //stampa Key
    printf("Key:\n");
    printf("%.2f ", Key);
    printf("\n");
    
    
    //ricerca di Key in M
    for (i=0; i<N; i++){
        for (j=0;j<N;j++)
            if(M[i][j] == Key){
                found = 1; //true!
                riga=i;
                colonna=j;
            };
    };
    printf("\n");
    //stampo risultato:
    if(found)
        printf("Trovato in riga %i, colonna %i\n", riga, colonna);
    else
        printf("-not found-\n");
    
  return 0;
}




