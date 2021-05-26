//array_matrix_addresses.c

#include <stdio.h>
#include <stdlib.h>
#define N 2
#define M 3

int main(void) {
    int Matrix[N][M];
    int SumR[N], SumC[M];
    int i, j;
    
    srand(1);
    //inizializzazioni:
    for (i=0; i<N; i++)
        for (j=0;j<M;j++)
            if(i%2==0)
                Matrix[i][j] = rand()%6 *2;
            else
                Matrix[i][j] = rand()%5*2 +1;
    
    
    //somma per righe:
    for (i=0; i<N; i++){
        SumR[i]=0;
        for (j=0;j<M;j++)
            SumR[i] += Matrix[i][j];
    };
    
    
    
    //somma per colonne:
    for (j=0; j<M; j++){
        SumC[j]=0;
        for (i=0;i<N;i++)
            SumC[j] += Matrix[i][j];
    };

    
    //stampa Matrix
    for(i=0; i<N ; i++){
        for(j=0; j<M ; j++)
            printf("%2i ", Matrix[i][j]);
        printf("\n");
                   };
    printf("\n");
    
    //stampa SumR
    printf("SumR:\n");
    for(i=0; i<N ; i++)
        printf("%i ", SumR[i]);
    printf("\n");
    
    //stampa SumC
    printf("SumC:\n");
    for(j=0; j<M ; j++)
        printf("%i ", SumC[j]);
    printf("\n");
  return 0;
}




