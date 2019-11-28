#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int findmax(int array[], int index, int len);

int main()
{
	int array[SIZE], Num, max;
	int i;
	printf("Enter the size of array:");
	scanf_s("%d", &Num);
	printf("Entner %d elements in array:\n", Num);
	for (i = 0; i < Num; i++)
	{
		scanf_s("%d", &array[i]);
	}
	max = findmax(array, 0, Num);
	printf("Maximum element in array:%d\n", max);
}

int findmax(int array[], int index, int len)
{
	int max;
	if (index >= len - 2)
	{
		if (array[index] > array[index + 1])
		{
			return array[index];
		}
		else
		{
			return array[index + 1];
		}
	}
	max = findmax(array, index + 1, len);
	if (array[index] > max)
	{
		return array[index];
	}
	else
	{
		return max;
	}
}