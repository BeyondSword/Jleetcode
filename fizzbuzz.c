#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char** fizzBuzz(int n, int* returnSize) {
	char* array[n + 1];
	int i;
	int length;
	
	length = 3;
	array[0] = malloc(length);
	*returnSize += length;
	memcpy(array[0],"[\n",3);
	for(i = 1; i<=n; i++)
	{
		if(!(i % 3 | i % 5))
		{
			length = 12;
			array[i] = malloc(length);
			if(i == n)
			{
				memcpy(array[i], "\tFizzBuzz\n", length - 1);
						*returnSize += length;
				continue;
			}
			memcpy(array[i], "\tFizzBuzz,\n", length);
		}
		else if(!(i%3))
		{
			length = 8;
			array[i] = malloc(length);
			if(i == n)
			{
				memcpy(array[i], "\tFizz\n", length-1);
						*returnSize += length;
				continue;
			}
			memcpy(array[i], "\tFizz,\n", length);
		}
		else if(!(i%5))
		{
			length = 8;
			array[i] = malloc(length);
			if(i == n)
			{
				memcpy(array[i], "\tBuzz\n", length-1);
						*returnSize += length;
				continue;
			}
			memcpy(array[i], "\tBuzz,\n", length);
		}
		else
		{
			length = (i/10 + 1) + 4;
			array[i] = malloc(length);
			if(i == n)
			{
				snprintf(array[i], length-1, "\t%d\n", i);
						*returnSize += length;
				continue;
			}
			snprintf(array[i], length, "\t%d,\n", i);
		}
		*returnSize += length;
	}
	
	length = 3;
	array[n + 1] = malloc(length);
	memcpy(array[n + 1], "]\n", length);
	*returnSize += length;
	
	return array;
}

int main()
{
	int n;
	int returnSize;
	char** p;
	scanf("%d", &n);
	p = fizzBuzz(n, &returnSize);
	return 0;
}
