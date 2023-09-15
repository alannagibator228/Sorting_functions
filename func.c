#include <stdio.h>
#include <string.h>
#include "func.h"

void swap_string (char*** array, int element_1, int element_2)
{
    char* point = (*array)[element_1];
    (*array)[element_1] = (*array)[element_2];
    (*array)[element_2] = point;
}

void swap_number (int**  array, int element_1, int element_2)
{
    int number = (*array)[element_1];
    (*array)[element_1] = (*array)[element_2];
    (*array)[element_2] = number;
}

/////////////////////////////////////////////////////////////

void boble_sort_numbers (int** array, int length)
{
    int num_of_cmp = 0;
    for (int run = 0; run < length -1; run++)
    {
        num_of_cmp = 0;
        for (int num_cmp = 0; num_cmp< length - run - 1; num_cmp++)
        {
            if ((*array)[num_cmp] > (*array)[num_cmp + 1])
            {
                swap_number(array, num_cmp, num_cmp + 1);
                num_of_cmp = 1;
            }
        } 

        if (num_of_cmp == 0)
        {
            break;
        }
    }
}

void boble_sort_strings (char*** array, int length)
{
    int num_of_cmp = 0;
    for (int run = 0; run < length -1; run++)
    {
        num_of_cmp = 0;
        for (int num_cmp = 0; num_cmp< length - run - 1; num_cmp++)
        {
            if ((*array)[num_cmp] > (*array)[num_cmp + 1])
            {
                swap_string(array, num_cmp, num_cmp + 1);
                num_of_cmp = 1;
            }
        } 

        if (num_of_cmp == 0)
        {
            break;
        }
    }
}
