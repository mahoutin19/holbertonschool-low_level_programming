#include "function_pointers.h"

/**
* int_index - ...
* @array: ...
* @size: ...
* @cmp: ...
*Return: ...
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int index = 0;

if (size > 0)
{
if (array != NULL && cmp != NULL)
while (index < size)
{
if (cmp(array[index]))
return (index);

index++;
}
}
return (-1);
}
