#include <stdlib.h>
#include <stdio.h>

int main(void) {
    size_t count;
    printf("Input count: ");
    scanf("%i", &count);

    long *a = calloc(count, sizeof(long));

    for (size_t i = 0; i < count; i++)
        a[i] = i;

    for (size_t i = 0; i < count; i++)
        printf("%i ", a[i]);
    
    // Обязательно делайте очистку динамической памяти
    free(a);
}