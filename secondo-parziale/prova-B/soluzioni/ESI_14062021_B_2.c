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
    struct node_t *new = (struct node_t *)malloc(sizeof(struct node_t));

    if (new == NULL){
		printf("Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}
	
    new->value = value;
    new->next = NULL;
    return new;
}

/**
 * Crea una lista di nodi e ritorna il puntatore al primo di essi.
 */
struct node_t *create_list(const char *s) {
    struct node_t *head = NULL;
    struct node_t *prev;

    while (*s) {
        struct node_t *new = create_node(*s);

        if (head == NULL) {
            head = new;
        } else {
            prev->next = new;
        }
        prev = new;
        s++;
    }
    return head;
}

/**
 * Stampa il valore dei nodi della lista se sono presenti in white_list
 */
void print_chars(struct node_t *head, char *white_list) {
    struct node_t *current = head;

    while (current != NULL) {
        if (instr(current->value, white_list)) {
            printf("%c", current->value);
        }
        current = current->next;
    }
}

/**
 * Ritorna true se ch è presente in s, false in caso contrario.
 */
bool instr(char ch, char *s) {
    while (*s) {
        if (ch == *s) {
            return true;
        }
        s++;
    }
    return false;
}
