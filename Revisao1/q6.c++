#include <stdio.h> 
#include <iostream> 
using namespace std; 
 
typedef struct no { 
    int item; 
    struct no *prox; 
}No;


int main() {
    No v[4];

    v[0].prox = v+2;
    v[1].prox = v+3;
    v[2].prox = NULL;
    v[3].prox = v+0;

    cout << "Digite 4 valores:\n";
    for (int i = 0; i < 4; i++) {
        cout << "v[" << i << "].item = ";
        cin >> v[i].item;
    }
    cout << "\nSaida: ";

    for (No *p = v + 1; p != NULL; p = p->prox) {
        cout << p->item << " ";
    }
    cout << endl;

    return 0;
}