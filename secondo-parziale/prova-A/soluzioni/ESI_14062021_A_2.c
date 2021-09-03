#include <stdio.h>
#include <stdlib.h>

struct mychar_t {
    char ch;
    struct mychar_t *next;
};

struct mychar_t *create_list(const char *s);
struct mychar_t *create_mychar(char ch);
void print_list(struct mychar_t *head, char sep);

/**
 * Entry point del programma.
 * Non è richiesta la deallocazione della memoria.
 * Output:
 * H*e*l*l*o
 */
int main() {
    struct mychar_t *head = create_list("Hello");
    print_list(head, '*');
    return 0;
}

/**
 * Crea e ritorna un nuovo nodo mychar_t.
 */
struct mychar_t *create_mychar(char ch) {
    struct mychar_t *new = (struct mychar_t *)malloc(sizeof(struct mychar_t));

    if (new == NULL){
		printf("Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}
	
    new->ch = ch;
    new->next = NULL;
    return new;
}

/**
 * Crea una lista di nodi mychar_t e ritorna il puntatore al primo di essi.
 */
struct mychar_t *create_list(const char *s) {
    struct mychar_t *head = NULL;
    struct mychar_t *prev;

    while (*s) {
        struct mychar_t *new = create_mychar(*s);

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
 * Stampa i nodi della lista utilizzando sep come separatore.
 * Quindi, dopo l'ultimo nodo mychar_t non va posto sep.
 */
void print_list(struct mychar_t *head, char sep) {
    struct mychar_t *current = head;

    while (current) {
        if (current->next != NULL) {
            printf("%c%c", current->ch, sep);
        } else {
            printf("%c", current->ch);
        }
        current = current->next;
    }
    printf("\n");
}
