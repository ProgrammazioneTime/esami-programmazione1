#include <stdio.h>
#include <stdlib.h>

struct length_t {
    int value;
    struct length_t *next;
};

struct length_t *create_length(int value);
void append_length(struct length_t *head, int value);
void print_list(struct length_t *head, char sep);
int list_length(struct length_t *head);

/**
 * Entry point del programma.
 * Non gestire la deallocazione della memoria.
 * Output:
 * 7-8-6-3
 * Lunghezza totale: 24
 */
int main() {
    struct length_t *head = create_length(7);
    append_length(head, 8);
    append_length(head, 6);
    append_length(head, 3);
    print_list(head, '-');
    printf("\nLunghezza totale: %i\n", list_length(head));
    return 0;
}

/**
 * Crea e ritorna un nuovo nodo.
 */
struct length_t *create_length(int value) {
}

/**
 * Aggiunge un nodo alla lista.
 * Ipotesi: head è diverso da NULL
 */
void append_length(struct length_t *head, int value) {
}

/**
 * Stampa le distanze dei nodi della lista utilizzando sep come separatore.
 * Quindi, dopo l'ultimo nodo non va posto sep.
 */
void print_list(struct length_t *head, char sep) {
}

/**
 * Ritorna la somma delle lunghezze dei nodi della lista.
 */
int list_length(struct length_t *head) {
}
