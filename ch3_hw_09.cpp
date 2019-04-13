/*
 * ch3_hw_09.cpp
 * Author:Yun Pei Chao 
 */
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int people(int number);

int
main(void)
{
	int number;
	double Case;
	printf("FLU EPIDEMIC PREDICTIONS BASED ON ELAPSED DAYS SINCE FIRST CASE REPORT \n");
	
	printf("Enter day number>> ");
	scanf("%d", &number);
	printf("By day %d,model predicts %d cases total.\n", number, people(number));
	
	printf("Enter day number>> ");
	scanf("%d", &number);
	printf("By day %d,model predicts %d cases total.\n", number, people(number));
	
	printf("Enter day number>> ");
	scanf("%d", &number);
	printf("By day %d,model predicts %d cases total.\n", number, people(number));
		
	system("pause");
	return 0;
}
int people(int number)
{
		return (40000 / (1 + 39999 * exp(-0.24681*number)));
}
