/*
 * ch3_hw_10.cpp
 * Author:Yun Pei Chao 
 */
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>

double celsius_at_depth(double depth);
double fahrenheit(double Celsius);
int
main(void)
{
	double depth;
	printf("Enter the depth (in kilometers) inside the Earth =>");
	scanf("%lf", &depth);

	printf("The temperature is %f degrees Celsius.\n", celsius_at_depth(depth));

	printf("The temperature is %f degrees Fahrenheit.\n", fahrenheit(celsius_at_depth(depth)));
	system("pause");
	return 0;
}
double celsius_at_depth(double depth)
{
  return(10 * depth +20);
}
double fahrenheit(double Celsius)
{
	return(1.8* Celsius +32);
}