#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int* p;
	p = (int*)malloc(sizeof(int) * 3);
	for (int count = 0; count < 3; count++)
	{
		scanf_s("%d", p + count);
	}
	int sum = 0;
	for (int count = 0; count < 3; count++)
	{
		sum += *(p + count);
	}
	printf("%d", sum);
	return 0;
}