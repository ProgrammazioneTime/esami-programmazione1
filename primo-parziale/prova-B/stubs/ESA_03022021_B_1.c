#include <stdio.h>

#define END -1
#define EVEN 0
#define ODD 1
#define ALL 2

int lenv(int v[], int type);
double averagev(int v[], int indexes[]);

/**
 * Program entry point
 * Numero di valori: 7
 * Numero di valori pari: 5
 * Media: 9.67
 */
int main() {
    int values[] = {1, 10, 6, 22, 0, 2, 7, END};
    printf("Numero di valori: %i\n", lenv(values, ALL));
    printf("Numero di valori pari: %i\n", lenv(values, EVEN));
    int indexes[] = {3, 2, 12, 0, END};
    printf("Media: %.2lf\n", averagev(values, indexes));
    return 0;
}

/**
 * Restituisce il numero di elementi di un vettore di interi terminato da END
 * in base alla tipologia (pari, dispari oppure sia pari che dispari, cioè tutti),
 */
int lenv(int v[], int type) {
}

/**
 * Restituisce la media degli elementi di un vettore di interi terminato da END
 * limitatamente agli indici elencati nel vettore indexes,
 * anche quest'ultimo è terminato da END.
 */
double averagev(int v[], int indexes[]) {
}
