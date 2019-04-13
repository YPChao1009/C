/*
 * ch4_hw_02.cpp
 * Author:Yun Pei Chao 
 */
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int
main(void)
{
	double wt_lb, ht_in,BMI;
	printf("Enter your weight(in pounds)=>");
	scanf("%lf", &wt_lb);
	printf("Enter your height(in inches)=>");
	scanf("%lf", &ht_in);

	BMI = (703 * wt_lb) /( pow(ht_in, 2));

	if (BMI < 18.5)
		printf("Underweight \n");
	else if (BMI >= 18.5 && BMI < 24.9)
		printf("Normal \n");
	else if (BMI >= 25.0 && BMI < 29.9)
		printf("Overweight \n");
	else if (BMI >= 30.0)
		printf("Obese \n");
	system("pause");
	return 0;
}
