/*Leia dois nomes e compare se os nomes são iguais. 
Se forem iguais imprima “São Iguais!”, senão imprima “São Diferentes”.  
OBSERVAÇÃO: 
Faça usando: 
char nome1[20];  
char nome2[20]; 
UTILIZE O COMANDO DE REPETIÇÃO “FOR” PARA PERCORRER AS 
STRINGS CARACTERE A CARACTERE E FAZER A COMPARAÇÃO ENTRE ELAS.*/

#include <stdio.h>

int main() {
    char nome1[20];
    char nome2[20];
    int diferentes = 0;
    int i;

    printf("Nome1: ");
    scanf("%s", nome1);

    printf("Nome2: ");
    scanf("%s", nome2);

    for (i = 0; nome1[i] != '\0' || nome2[i] != '\0'; i++) {
        if (nome1[i] != nome2[i]) {
            diferentes = 1;
            break;
        }
    }

    if (diferentes == 0) {
        printf("Sao Iguais!\n");
    } else {
        printf("Sao Diferentes!\n");
    }
    return 0;
}