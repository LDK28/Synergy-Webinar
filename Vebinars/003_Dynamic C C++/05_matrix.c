#include <stdlib.h>
#include <stdio.h>

int main(void) {
    
    size_t n, m;
    scanf("%i %i", &n, &m);

    long *a = malloc(sizeof(long) * n * m);

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            a[i * m + j] = j;
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            printf("%i ", a[i * m + j]);
        }
        printf("\n");
    }
    
    // Обязательно делайте очистку динамической памяти
    free(a);
}