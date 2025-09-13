#include <stdio.h>

typedef struct {
    char valor[10];
} Str;

int main() {
    Str x = {"um"};
    Str y = {"dois"};

    puts(x.valor);
    x = y;
    puts(x.valor);

    return 0;
}
/*X passou a ser a cópia de Y, por isso que ficou "dois" na segunda exibição.*/