#include "search_algos.h"

/**
 * binary_search - functions to search value using binary search algorithm
 * @array: pointer to first element
 * @size: exact number of elements in array
 * @value: value being searched for
 *
 * Return: the first index where value is located or -1
*/

int binary_search(int *array, size_t size, int value)
{
    unsigned int i, j, k, l, m;
    int n;

    if (array == NULL)
        return (-1);
    i = 0;
    j = size - 1;
    while (i <= j)
    {
        printf("Searching in array: ");
        for (k = i; k < j; k++)
            printf("%d, ", array[k]);
        printf("%d\n", array[k]);
        m = (i + j) / 2;
        n = array[m];
        if (n < value)
            i = m + 1;
        else if (n > value)
            j = m - 1;
        else
        {
            l = m;
            return (l);
        }
    }
    return (-1);
}
