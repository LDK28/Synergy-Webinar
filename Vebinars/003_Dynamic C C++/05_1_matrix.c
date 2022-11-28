#include <stdlib.h>
#include <stdio.h>

int main(void) {
    
    size_t n, m;
    scanf("%i %i", &n, &m);

    // Массив указателей
    long **matr = malloc(sizeof(long*) * n);

    for (size_t i = 0; i < n; i++)
    {
        // Указатель на каждую строку матрицы записывается в массив указателей
        matr[i] = malloc(sizeof(long) * m);
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            matr[i][j] = j;
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            printf("%i ", matr[i][j]);
        }
        printf("\n");
    }
    

    // Очистка динамической матрицы
    // Обязательно делайте очистку динамической памяти
    for (size_t i = 0; i < n; i++)
    {
        free(matr[i]);
    }

    free(matr);
    
}