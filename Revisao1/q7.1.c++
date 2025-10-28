#include <stdio.h> 
#include <iostream> 
using namespace std; 
 
typedef struct no { 
    int item; 
    struct no *prox; 
} *Lst;


Lst no (int x, Lst p) {
    Lst n = (struct no*)malloc(sizeof(struct no));
    n->item = x;
    n->prox = p;
    return n;
}


main() {
    Lst inicio = NULL;
    Lst atual = NULL;

    int n;
    cout << "Quantos elementos deseja inserir? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int valor;
        cout << "Digite o valor do elemento " << i + 1 << ": ";
        cin >> valor;

        Lst novo = (struct no*) malloc(sizeof(struct no));
        novo->item = valor;
        novo->prox = NULL;

        if (inicio == NULL) { //se for o primeiro nó
            inicio = novo;
            atual = novo;
        } else {
            atual->prox = novo;
            atual = novo;
        }
    }

    cout << "\nLista final:\n";
    Lst p = inicio;
    while (p != NULL) {
        cout << p->item << endl;
        p = p->prox;
    }

    return 0;
}