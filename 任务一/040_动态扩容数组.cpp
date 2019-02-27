#include <stdio.h>
#include <stdlib.h>
#include "stdafx.h"
#include "malloc.h"

int main()
{
	int n1, i;
	int *array;
	puts("Array length：");
	scanf_s("%d", &n1);
	array = (int*)malloc(n1*sizeof(int));//第一维
	for (i = 0;i<n1;i++)
	{
		array[i] = i + 1;
		printf("%d\t", array[i]);
	}
	free(array);//释放第一维指针
	return 0;
}
