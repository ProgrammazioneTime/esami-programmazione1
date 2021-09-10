#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct node_t {
    char value;
    struct node_t *next;
};

struct node_t *create_list(const char *s);
struct node_t *create_node(char value);
void print_chars(struct node_t *head, char *white_list);
bool instr(char ch, char *s);

/**
 * Entry point del programma.
 * Non gestire la deallocazione della memoria.
 * Output:
 * hll wrld
 */
int main() {
    struct node_t *head = create_list("hello world");
    print_chars(head, " dhlrw");
    printf("\n");
    return 0;
}

/**
 * Crea e ritorna un nuovo nodo.
 */
struct node_t *create_node(char value) {
}

/**
 * Crea una lista di nodi e ritorna il puntatore al primo di essi.
 */
struct node_t *create_list(const char *s) {
}

/**
 * Stampa il valore dei nodi della lista se sono presenti in white_list
 */
void print_chars(struct node_t *head, char *white_list) {
}

/**
 * Ritorna true se ch è presente in s, false in caso contrario.
 */
bool instr(char ch, char *s) {
}
