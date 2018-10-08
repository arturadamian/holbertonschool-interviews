#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"


/**
 * binary_search - find the value in the sorted array
 * @array: pointed to the first element of the array
 * @size: the size of the  array
 * @value: the value to find
 *
 * Return: the node or -1
 **/
int _binary_search(int *array, size_t left, size_t right, int value)
{
	unsigned int mid = 0;

	if (right >= left)
	{
		mid = left + (right - left) / 2;
		print_array(array, left, right);
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			return (_binary_search(array, left, mid - 1, value));
		return (_binary_search(array, mid + 1, right, value));
	}
	return (-1);
}

/**
 * print_array - prints the array
 * @array: pointed to the first element of the array
 * @left: the first element
 * @right: the last element
 *
 * Return: the node or -1
 **/
void print_array(int *array, size_t left, size_t right)
{
	printf("Searching in array: ");
	while (left <= right)
	{
		printf("%d", array[left]);
		if (left != right)
			printf(", ");
		else
			printf("\n");
		left++;
	}
}

/**
 * binary_search - main function to find a match
 * @array: pointer the array
 * @size: size of the array
 * @value: value to search
 *
 * Return: index or -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (array)
		return (_binary_search(array, 0, size - 1, value));
	return (-1);
}
