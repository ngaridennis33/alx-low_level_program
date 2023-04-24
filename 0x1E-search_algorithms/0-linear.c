#include "search_algos.h"

/**
 * Linear_search- sequentially checks element in an array of integers.
 * array- pointer to the first elemnt of the array
 * size- the number of elemntns in the array
 * value- the elemnt to search for
 *
 * Functionality
 *
 * int linear_search(int *array, size_t size, int value);
 * The function takes in an array of integers
 * Compares the value of the array to the value you are searching and print the value
 * it returns the index of the first occurrence in the array, or
 * -1 if te value is not found or the array is NULL
 *
 * In the main function, we test the linear_search function
 * with some sample inputs,
 * printing the result of each call.
 *
 */

int linear_search(int *array, size_t size, int value){
	int i;

	if(array == NULL){
		return -1
	}
	for(i=0; i<(int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, *array);
		if(*array == value)
			return (i);
		array++;
	}
	return (-1);
}
