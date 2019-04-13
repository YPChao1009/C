/*
 * ch3_hw_01.cpp
 * Author:Yun Pei Chao 
 */
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define principal = P
#define monthly interest rate = i
#define total number of payments = n
int
main(void)
{
	int n;
	double  i,P, price , payment, annual, rate;
	printf("Enter the car's purchase price =>");
	scanf("%lf", &price);
	printf("Enter the total number of payments =>");
	scanf("%d", &n);
	printf("Enter the annual rate =>");
	scanf("%lf", &rate);

	P = price - 500;
	annual = rate / 100;
	i = annual / 12;	

	payment = (i*P)/  (1 - pow((1 + i), -n));
	printf("The monthly payment is $%.2f\n", payment);
	system("pause");
	return 0;
}
