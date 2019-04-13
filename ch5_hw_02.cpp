/*
 * ch5_hw_02.cpp
 * Author:Yun Pei Chao 
 */
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	char n;
	int sum = 0, value;

	printf("Enter the number=>");
	do {
		scanf("%c", &n);

		if (n != '\n') {
        value = (int)n - (int)'0';
		printf("%d \n", value);
		sum += value;
        }
   }while (n != '\n');
	printf("\nThe sum of the numeric value of digit is %d.\n", sum);
	system("pause");
	return 0;
}
