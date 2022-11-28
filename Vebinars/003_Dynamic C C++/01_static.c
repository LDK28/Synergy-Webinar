#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int count;
    scanf("%i", &count);

    // Так делать нельзя, так как это статический массив
    long a[count];
    // На момент компиляции должен быть известен окончательный размер этого массива
    long b[] = {1, 2, 3};

    for (size_t i = 0; i < count; i++)
    {
        a[i] = i;
    }
    for (size_t i = 0; i < count; i++)
    {
        printf("%i ", a[i]);
    }
}