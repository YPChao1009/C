/*
 * ch7_hw_05.cpp
 * Author:Yun Pei Chao 
 */
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	int num[12],sum1=0,sum2=0,i,a,odd,even,result,check_digit,last_digit,final_digit;
	
		printf("Enter the 12 digits of a barcode separated by spaces>\n");
		for (i = 0;i < 12;i++)
			scanf("%d", &num[i]);

		for (i = 0;i < 6;i++)
		{
			odd = num[2 * i];
			sum1 += odd;
			a=sum1 * 3;
		}
		printf("The result of step1 is %d.\n", a);
		for (i = 0;i < 5;i++)
		{
			even = num[2 * i + 1];
			sum2 += even;
			
		}
		result = a  + sum2;
		printf("The result of step2 is %d.\n", result);
		last_digit = result % 10;
		if (last_digit == 0)
			check_digit = 0;

		else
			check_digit = 10 - last_digit;

		final_digit = num[11];
		
		for (i = 0;i < 12;i++)
		{
			printf("%d", num[i]);

		}
		if (check_digit = final_digit)

			printf("->validated\n");
		else
			printf("->error in barcode\n");
	
	
		






	system("pause");
	return 0;
}