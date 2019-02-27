#include <stdio.h>
#include <stdlib.h>
#include "stdafx.h"
#include "malloc.h"

int main()
{
	int arrayLength;
	int i;
	int *array;
	puts("Array length：");
	scanf_s("%d", &arrayLength);
	array = (int *)malloc(arrayLength * sizeof (int));
	for (i = 0;i < arrayLength; i++)
	{
		array[i] = i + 1;
		printf("%d\t", array[i]);
	}
	free(array);
	return 0;
}
