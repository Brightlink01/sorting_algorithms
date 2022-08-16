#include"sort.h"
/**
 * bubble_sort - function that sorts the arry
 *@arry: Array to be sorted
 *@size: the size of arry to be sorted
 *Return: return void
 *
 **/
void bubble_sort(int *array, size_t size)
{
size_t i, j;
int temp;

for (j = 0; j < size; j++)
{
for (i = 0; i < size - 1 - j; i++)
{
if (array[i] > array[i + 1])
{
temp = array[i];
array[i] = array[i + 1];
array[i + 1] = temp;
print_array(array, size);
}
}
}
}
