/*Leia dois nomes e compare se os nomes são iguais. 
Se forem iguais imprima “São Iguais!”, senão imprima “São Diferentes”.  
OBSERVAÇÃO: 
Faça usando: 
char nome1[20];  
char nome2[20]; 
USE A FUNÇÃO STRCMP () PARA COMPARAR AS STRINGS.*/

#include <stdio.h>
#include <string.h>

int main() {
    char nome1[20];
    char nome2[20];

    printf("Nome1: ");
    scanf("%s", nome1);

    printf("Nome2: ");
    scanf("%s", nome2);

    if (strcmp(nome1, nome2) == 0) {
        printf("Sao Iguais!\n");
    } else {
        printf("Sao Diferentes!\n");
    }

    return 0;
}