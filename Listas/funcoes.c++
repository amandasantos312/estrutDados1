#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define fmt "%d"
using namespace std;

typedef int Item;
typedef struct no {
    Item item;
    struct no *prox;
}*Lista;

Lista inclue(Item x, Lista p) {
    Lista n = (Lista)malloc(sizeof(Lista));
    n->item = x;
    n->prox = p;
    return n;
}

void exibe(Lista L) {
    while (L != NULL) {
        cout<<L->item<<endl;
        L=L->prox;
    }
}

void anexa(Lista *A, Lista B) {
    if (B == NULL) return;
    while (*A != NULL)
        A = &(*A)->prox;
    *A=B;    
}

void destroi(Lista *a) {
    Lista n = *a;
    cout<<"-------percorre------"<<endl;

    while (*a != 0) {
        n = *a;
        *a = n->prox;
        exibe(n);
        cout<<"------retirando ...."<<n->item<<endl;
        free(n);
    }
}


int main() {
    Lista l;
    l = inclue(1, NULL);
    l = inclue(2, l);
    l = inclue(3, l);
    
    //Exibe
    Lista A = inclue(3, inclue(2, inclue(1, NULL)));
    exibe(A);
    Lista atual = l;
    
    printf("\n");

    //Anexa:
    Lista H = inclue(4, inclue(2, NULL));
    Lista I = inclue(3, inclue(1, inclue(5,NULL)));
    anexa(&H, I);
    exibe(H);

    printf("\n");

    //Destroí:
    Lista M = inclue(30, inclue(10, inclue(50, NULL)));
    destroi(&M);
}