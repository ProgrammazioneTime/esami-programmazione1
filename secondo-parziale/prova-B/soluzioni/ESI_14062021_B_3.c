#include <stdio.h>
#include <stdlib.h>

/* ci sono diverse soluzioni al problema. Una tra queste è rappresentata dal seguente codice:
 */


int z = 0;
int *pvar0;
int v = 0;

void myf() {
    pvar0 = malloc(sizeof(int));
    *pvar0 = 101;
    pvar0 = malloc(sizeof(int));
    *pvar0 = 100;
    // qui la memoria si trova nello stato descritto dalle specifiche.
}

int main() {
    int * pvar1;
    int var1 = 0;
    pvar1 = malloc(sizeof(int));
    *pvar1 = 100;
    myf();
    return 0;
}
