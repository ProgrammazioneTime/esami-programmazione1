#include <stdio.h>
#include <stdlib.h>

/* ci sono diverse soluzioni al problema. Una tra queste è rappresentata dal seguente codice:
 */


int z = 0;


void myf(int x) {
    if(x>0)
        myf(--x);
    else
        // qui la memoria si trova nello stato descritto dalle specifiche.
        return;
    
}

int main() {
    int * pvar1;
    int var1 = 0;
    pvar1 = malloc(sizeof(int));
    *pvar1 = 1;
    pvar1 = malloc(sizeof(int));
    *pvar1 = 0;
    myf(1);
    return 0;
}
