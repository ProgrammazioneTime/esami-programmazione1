#include <stdio.h>
#include <stdlib.h>

/* ci sono diverse soluzioni al problema. Una tra queste è rappresentata dal seguente codice:
 */


int z = 0;
int *pvar0;
int v = 0;

void myf() {
    int * pvar2 = malloc(sizeof(int));
    *pvar2 = 101;
    pvar2 = malloc(sizeof(int));
    *pvar2 = 100;
    pvar0 = pvar2;
    // qui la memoria si trova nello stato descritto dalle specifiche.
}

int main() {
	int var1 = 0;
    int * pvar1 = malloc(sizeof(int));
    *pvar1 = 99;
    myf();
    return 0;
}
