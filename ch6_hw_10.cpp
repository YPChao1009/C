/*
 * ch6_hw_10.cpp
 * Author:Yun Pei Chao 
 */
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
double add(double num1, double num2);
double sub(double num1, double num2);
double mul(double num1, double num2);
double ddiv(double num1, double num2);
int fact(int n);

int
main(void)
{
	int choice, n, error;
	double num1, num2, sum;
	char discard;

	printf("1:Addition\n");
	printf("2:Subtraction\n");
	printf("3:Multiplication\n");
	printf("4:Division\n");
	printf("5:Factorial\n");
	printf("6:Quit\n");
	
	printf("Enter the choice=>");
	do {
	
		error = 0;
		scanf("%d", &choice);
 if (choice > 6 || choice < 1)
		{
			error = 1;
			printf("Invalid choice!!\n");
			printf("Enter the choice=>");
		}
		else if (choice == 5)
		{
			error = 0;
			printf("Enter the number=>");
			scanf("%d", &n);
			printf("%d!=>%d\n",n, fact(n));
		}

		else if (choice == 6)
		{
			error = 0;
		}
		
		else
		{
			error = 0;
			printf("Enter two numbers=>");
			scanf("%lf,%lf", &num1, &num2);
			if (choice == 1)
			{
				printf("Sum=>%lf\n", add(num1, num2));
			}
			if (choice == 2)
			{
				printf("Difference=>%lf\n", sub(num1, num2));
			}
			if (choice == 3)
			{
				printf("Product=>%lf\n", mul(num1, num2));
			}
			if (choice == 4)
			{
				printf("Quotient=>%lf\n", ddiv(num1, num2));
			}}
 
		
	do {
		scanf("%c", &discard);
	} while (discard != '\n');
}while (error);
		system("pause");
		return 0;


	}

	double add(double num1, double num2)
	{

		return(num1 + num2);
	}

	double sub(double num1, double num2)
	{

		return(num1 - num2);
	}


	double mul(double num1, double num2)
	{

		return(num1 * num2);
	}


	double ddiv(double num1, double num2)
	{

		return(num1 / num2);
	}
	
	int fact(int n)
	{

		int i, value = 1;
		for (i = 1; i <= n; i++)
		{
			value *= i;
		}
		return(value);
	}
	