#include <stdio.h>
#include <string.h>
#include "func.h"

void swap (int**  array, int element_1, int element_2)
{
    int number = (*array)[element_1];
    (*array)[element_1] = (*array)[element_2];
    (*array)[element_2] = number;
}

/////////////////////////////////////////////////////////////

void boble_sort (int** array, int length)
{
    int num_of_cmp;
    for (int run = 0; run < length -1; run++)
    {
        num_of_cmp = 0;
        for (int num_cmp = 0; num_cmp< length - run - 1; num_cmp++)
        {
            if ((*array)[num_cmp] > (*array)[num_cmp + 1])
            {
                swap(array, num_cmp, num_cmp + 1);
                num_of_cmp = 1;
            }
        } 

        if (num_of_cmp == 0)
        {
            break;
        }
    }
}

void selection_sort (int** array, int length)
{
    int index_min;
    for (int index = 0; index < length; index++)
    {
        index_min = index;
        for (int num = index; num < length; num ++)
        {
            if ((*array)[index_min] > (*array)[num])
            {
                index_min = num;
            }
        }
        swap(array, index_min, index);
    }
}