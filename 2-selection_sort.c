#include "sort.h"

/**
 * selection_sort - sorts an array of integers using a selction sort
 * algorithm
 * @array: array of integers to be sorted
 * @size: amount of elements in array
 */
void selection_sort(int *array, size_t size)
{
	int i, j, mn_j, temp, n = (int)size;

	if (!array || size < 2)
		return;

	/* at every position in the n-member array */
	for (i = 0; i < n - 1; i++)
	{
		/* scan from that position to the end, */
		mn_j = i;
		for (j = i + 1; j < n; j++)
		{
			/* determine the minimum value in that range */
			if (array[j] < array[mn_j])
			{
				mn_j = j;
			}
		}
		/* and if it is lower than the value at start of range, */
		/* swap them */
		if (mn_j != i)
		{
			temp = array[i];
			array[i] = array[mn_j];
			array[mn_j] = temp;
			print_array(array, size);
		}
	}
}
