#include <stdio.h>
int main() {
    int i, n, min = 999999, max = 0;
    for (i = 0; i < 10; i++) {
        printf("Ingrese numero: ");
        scanf("%d", &n);
        if (n > max) max = n;
        if (n < min) min = n;}
    printf("El numero mayor es: %d\nEl numero menor es: %d\n", max, min);
    return 0; }

