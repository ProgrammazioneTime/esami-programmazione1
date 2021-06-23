// prodotto tra matrici quadrate
#include <stdio.h>
#include <stdlib.h>
#define N 2
#define M 3

int main(void){
    const int A[N][M] = {
        {18, -1, -21},
        {26, 33, -49}
    };
    
    int B[N][M], Sum[N][M];
 
    int riga, colonna, maxR, maxC;
    
    //inserimento valori in B da tastiera:
    for (riga = 0 ; riga < N ; riga++){
        for(colonna = 0 ; colonna < M ; colonna++){
            printf("Inserisci elemento B[%i][%i]:", riga, colonna);
            scanf("%i", &B[riga][colonna]);
        };
    };
    
    //calcolo somma tra matrici:
    for (riga = 0 ; riga < N ; riga++){
        for(colonna = 0 ; colonna < M ; colonna++)
        Sum[riga][colonna] = A[riga][colonna] + B[riga][colonna];
    };
    //stampo Sum:
    printf("Sum:\n");
    for (riga = 0 ; riga < N ; riga++){
        for(colonna = 0 ; colonna < M ; colonna++)
            printf("[%3i]", Sum[riga][colonna]);
        printf("\n");
    };
    
    printf("\n");
    //stampo gli indici del valore massimo in Sum:
    maxR = maxC = 0;
    for (riga = 0 ; riga < N ; riga++){
        for(colonna = 0 ; colonna < M ; colonna++)
            if(Sum[maxR][maxC] < Sum[riga][colonna]){
                maxR = riga;
                maxC = colonna;
            };
    };
    printf("Il valore massimo è %i e si trova in Sum[%i][%i]\n", Sum[maxR][maxC], maxR, maxC);
    
    return 0;
}
