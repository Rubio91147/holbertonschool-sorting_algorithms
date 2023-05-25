#include "sort.h"
/**
 * bubble_sort - sort elements in ascending order
 *
 * @array: array of elements sorted
 * @size: size of array
 *
 * Return: Function to sort the array using Bubble sort algorithm
 */
void bubble_sort(int *array, size_t size)
{
int i, n, tmp;

if (!array || size == 0)
return;
tmp = 0;
n = size - 1;
while (n)
{
for (i = 0; i < n; i++)
{
tmp = array[i];
if (tmp > array[i + 1])
{
array[i] = array[i + 1];
array[i + 1] = tmp;
print_array(array, size);
}
}

n -= 1;
}
}
