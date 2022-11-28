#include <stdlib.h>
#include <stdio.h>

int main(void) {
    size_t count = 10;

    long *a = malloc(10 * sizeof(long));

    for (size_t i = 0; i < count; i++)
        a[i] = 1;

    for (size_t i = 0; i < count; i++)
        printf("%i ", a[i]);
    
    // Обязательно делайте очистку динамической памяти
    free(a);
}