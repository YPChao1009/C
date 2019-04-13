/*
 * ch2_hw_06.cpp
 * Author:Yun Pei Chao 
 */
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>


int
main()
{
	char grade;

	double minimum,current,final, percentage,ratio;

	printf("Enter disired grade>");

	scanf("%c", &grade);

	printf("Enter minimum average required >");

	scanf("%lf", &minimum);

	printf("Enter current average in course >");

	scanf("%lf", &current);

	printf("Enter how much the final counts as a percentage of the course grade >");

	scanf("%lf",&ratio);

	percentage =  ratio / 100;

	final =(minimum - current*(1- percentage))/ percentage;	

	printf("You need a score of %4.2f on the final to get a %c.\n", final,grade);	

	system("pause");
	return 0;
}


