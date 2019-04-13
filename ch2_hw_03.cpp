/*
 * ch2_hw_03.cpp
 * Author:Yun Pei Chao 
 */

#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#define PER_HOUR 60
#define temperature = T 
#define time = t
int
main()
{
	double  t, T,hours,minutes;

	printf("Enter the elapsed time( ? hours ? minutes ) =>");

	scanf("%lf%lf", &hours, &minutes );		

	t = hours + (minutes / PER_HOUR);

	T = (4 * t*t) / (t + 2) - 20;

	printf("The estimated temperature is %f degrees Celsius.\n", T);

	system("Pause");
	return 0;
}