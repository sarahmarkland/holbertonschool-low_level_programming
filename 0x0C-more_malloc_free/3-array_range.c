#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* array_range - create an array of ints
* @min: lowest number
* @max: highest number
* $mrklnd
* Return: ptr to array
*/
int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
