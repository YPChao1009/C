/*
 * ch5_hw_01.cpp
 * Author:Yun Pei Chao 
 */
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
		int n, sum = 0,r=0;
	printf("Enter the number >");
	scanf("%d", &n);
		
	while (n)
	{
		r = n % 10;
		
		sum += r;
		
		n /= 10;
		printf("The number is %d.\n", r);
	}
    
	if (0 == sum % 9)
	{
		printf("The number is divisible by 9\n");
	}
	else
	{
		printf("The number isn't divisible by 9\n");
	}

	system("pause");
	return 0;
}
