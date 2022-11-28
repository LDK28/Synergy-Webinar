#include <stdlib.h>
#include <stdio.h>

int main(void) {
    size_t count;
    printf("Input count: ");
    scanf("%i", &count);
    // Использование аналогичное malloc и calloc
    long *a = realloc(NULL, count * sizeof(long));
    for (size_t i = 0; i < count; i++)
    {
        a[i] = i;
    }
    for (size_t i = 0; i < count; i++)
    {
        printf("%i ", a[i]);
    }

    printf("\n");

    count -= 1;
    // Реаллокация(изменение размера) массива
    a = realloc(a, count * sizeof(long));

    for (size_t i = 0; i < count; i++)
    {
        a[i] = i;
    }
    for (size_t i = 0; i < count; i++)
    {
        printf("%i ", a[i]);
    }

    // Обязательно делайте очистку динамической памяти
    free(a);
}