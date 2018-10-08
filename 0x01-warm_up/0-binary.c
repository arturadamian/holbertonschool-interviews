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
int binary_search(int *array, size_t size, int value)
{
	unsigned int left = 0, right = size - 1, mid = 0;

	if (array)
	{
		print_array(array, left, right);
		while (left < right)
		{
			mid = left + (right - left) / 2;
		if (array[mid] < value)
		{
			left = mid + 1;
			print_array(array, left, right);
		}
		else if (array[mid] > value)
		{
			right = mid;
			print_array(array, left, right);
		}
		else
			return (mid);
		}
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
