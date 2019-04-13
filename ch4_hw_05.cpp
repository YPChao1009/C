/*
 * ch4_hw_05.cpp
 * Author:Yun Pei Chao 
 */
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	double n;
	printf("Enter the data usage =>");
	scanf("%lf", &n);


	if (n > 0.0 && n <= 1.0)
		printf("The charges are 250\n");
	else if (n > 1.0 && n <= 2.0)
		printf("The charges are 500\n");
	else if (n > 2.0 && n <= 5.0)
		printf("The charges are 1000\n");
	else if (n > 5.0 && n <= 10.0)
		printf("The charges are 1500\n");
	else if (n > 10.0)
		printf("The charges are 2000\n");
	else
		printf("WRONG!!!\n");

	system("pause");
	return 0;
}
