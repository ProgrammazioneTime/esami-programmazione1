/**
 * Considerare per un particolare tipo di vettore di interi,
 * nel quale il primo valore del vettore serve solo per indicare la lunghezza del vettore stesso
 * e non deve essere considerato tra i suoi elementi "validi".
 */
#include <stdbool.h>  // bool, true, false
#include <stdio.h>    // printf()

void printv(int v[]);
int countv(int v[], int div);
void resetv_in_range(int v[], int start, int end);

/**
 * Program entry point
 * Output:
 * 15 9 22 32 12
 * I multipli di 3 sono: 3
 * 0 9 0 32 12
 * I multipli di 3 sono: 2
 */
int main() {
    // Il primo valore serve per sapere di quanti elementi è composto effettivamente il vettore.
    int values[] = {5, 15, 9, 22, 32, 12};

    printv(values);
    printf("I multipli di %i sono: %i\n", 3, countv(values, 3));

    resetv_in_range(values, 15, 30);

    printv(values);
    printf("I multipli di %i sono: %i\n", 3, countv(values, 3));
    return 0;
}

/**
 * Stampa gli elementi di un vettore di interi.
 */
void printv(int v[]) {
}

/**
 * Conta quanti sono i multipli di vi tra gli elementi di un vettore di interi.
 */
int countv(int v[], int div) {
}

/**
 * Resetta gli elementi di un vettore di interi il cui valore appartiene all'intervallo [start, end], estremi compresi,
 */
void resetv_in_range(int v[], int start, int end) {
}
