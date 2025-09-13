#include <stdio.h>

int main(void) {
    int a = 3, b = 5;
    int *p = &a, *q = &b;

    *p = *p + *q; /*3 + 5 = 8   a=8 b=5 */
    *q = *p - *q; /*8 - 5 = 3   a=8 b=3 */
    *p = *p - *q; /*8 - 3 = 5   a=5 b=3 */

    printf("%d, %d\n", a, b);

    return 0;
}
/*Ocorreu uma troca de valores sem preicisar de uma variável auxiliar, 
apenas com ponteiros, adição e subtração. No fim, a = 5 e b = 3.*/