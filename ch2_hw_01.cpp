/*
 * ch2_hw_01.cpp
 * Author:Yun Pei Chao 
 */
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#define PER_MILE_FARE 1.50

int
main()
{
	double beginning, ending, miles, fare;
	
	printf("TAXI FARE CALCULATOR \n");
	
	printf("Enter beginning odometer reading =>");

	scanf("%lf", &beginning);

	printf("Enter ending odometer reading =>");

	scanf("%lf", &ending);

	miles = (ending - beginning);
	
	fare = PER_MILE_FARE *miles;
	
	printf("You traveled a distance of %4.1f miles.At $1.50 per mile,your fare is $%4.2f. \n", miles, fare);

	system("pause");
	return 0;
}