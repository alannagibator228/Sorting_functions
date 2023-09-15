#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main()
{
    int length = 10;
    //int array [10] = {3, 6, 7, 5, 4, 8, 1, 2, 10, 9};

    int* array = (int*) calloc(length, sizeof(int));
    array[0] = 3;
    array[1] = 6;
    array[2] = 7;
    array[3] = 5;
    array[4] = 4;
    array[5] = 8;
    array[6] = 1;
    array[7] = 2;
    array[8] = 10;
    array[9] = 9;

    boble_sort_numbers (&array, length);
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", array[i]);
    }

    printf("Иди нахуй\n");
}