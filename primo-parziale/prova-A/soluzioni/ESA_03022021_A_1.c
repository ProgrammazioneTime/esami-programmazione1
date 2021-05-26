#include <stdio.h>

#define END -1

int lenv(int v[]);
void resetv(int v[], int indexes[]);
int sumv(int v[]);

/**
 * Program entry point
 * Output:
 * Somma: 47
 * Somma: 30
 */
int main() {
    int values[] = {1, 9, 10, 6, 5, 1, 3, 0, 8, 4, END};
    int indexes[] = {3, 2, 12, 0, END};
    printf("Somma: %i\n", sumv(values));
    resetv(values, indexes);
    printf("Somma: %i\n", sumv(values));
    return 0;
}

/**
 * Restituisce il numero di elementi di un vettore di interi terminato da END.
 */
int lenv(int v[]) {
    int i = 0;

    while (v[i] != END) {
        i++;
    }
    return i;
}

/**
 * Modifica un vettore terminato da END, impostando a zero gli elementi
 * il cui indice è elencato nel vettore indexes.
 * Anche quest'ultimo è terminato da END
 */
void resetv(int v[], int indexes[]) {
    for (int i = 0; i < lenv(indexes); i++) {
        int index = indexes[i];

        if (index >= 0 && index < lenv(v)) {
            v[index] = 0;
        }
    }
}

/**
 * Restituisce la somma degli elementi di un vettore di interi terminato da END.
 */
int sumv(int v[]) {
    int sum = 0;

    for (int i = 0; i < lenv(v); i++) {
        sum += v[i];
    }
    return sum;
}