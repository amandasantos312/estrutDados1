#include <stdio.h>
#include <string.h>

struct livro {
    int cod;
    char nome[20];
};

typedef struct livro Tlivro;
Tlivro livros[5];
int ultimo = 0;

/* Observe o exemplo com a função strcmp
Ela compara 2 strings.
Em strcmp(n1, n2):
O resultado pode ser 1 (n1->n2), -1(n1<n2) ou 0(n1=n2).
Veja em:

char n[20];
strcpy(n, "ana");
char n2[20];
strcpy(n2, "ana");

int v = strcmp(n, n2);

printf("O valor é: %d\n", v);

if (v == 1) {
    printf("% eh maior que %s", n, n2);
} else if (v == -1) {
    printf("%s é menor que %s", n, n2);
} else if (v == 0) {
    printf("são iguais!");
}
*/

void inserirOrd(Tlivro novo) {
    int pos;
    if (ultimo < 5) {
        if (ultimo == 0) {
            livros[0] = novo;
            ultimo++;
        } else {
            //Inserir o elemento de maneira ordenada(Ordene pelo nome)

            //Use a função strcmp para comparar os nomes

            //Complete aqui

            livros[pos] = novo;
            ultimo++;
        }
    } else {
        printf("\nBiblioteca lotada!");
    }
}

void inserirNoFinal(Tlivro novo) {
    if (ultimo < 5) {
        //Completar aqui
    } else {
        printf("\nBiblioteca lotada!");
    }
}

void mostra() {
    for (int i = 0; i < ultimo; i++) {
        printf("\nCodigo do livro: %d", livros[i].cod);
        printf("\nNome do livro: %s", livros[i].nome);
    }
}

main() {
    //Cadastre elementos na lista de forma ordenada pelo código:
    //(8, "Aprendendo a Programar em C")
    //(6, "Fundamentos em Estrutura de Dados")
    //(10, "Aprendendo a Programar em Python")

    //Cadastre elementos no final da lista:
    //(12, "Estrutura de Dados 2")
    //(13, "Matematica Aplicada")

    //Mostre os elementos da lista
}

