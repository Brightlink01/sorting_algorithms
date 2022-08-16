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
int temp;
bool swap;
swap = false;
for (size_t j = 0; j < size; j++)
{
swap = false;
do {
for (size_t i = 0; i < size - 1 - j; i++)
{
if (array[i] < array[i + 1]
{
temp = array[i];
array[i] = array[i + 1];
array[i + 1] = temp;
swap = true;
}
}
} while (swap)
}
