/*
 * ch10_hw_03.cpp
 * Author:Yun Pei Chao 
 */
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 50

typedef struct {
	double mantissa;
	int exponent;
}sci_not_t;

void scan_sci();
sci_not_t sum(sci_not_t n1, sci_not_t n2);
sci_not_t difference(sci_not_t n1, sci_not_t n2);
sci_not_t product(sci_not_t n1, sci_not_t n2);
sci_not_t quotient(sci_not_t n1, sci_not_t n2);
double value(sci_not_t n);
sci_not_t science(double v);
void print_sci(sci_not_t n);
int 
main(void)
{
	printf("Enter two number expressed in scientific notation(0.XXXXXeX)>");
	scan_sci();
	
	
	system("pause");
	return 0;
}
void scan_sci()
{
	char n1[SIZE] = { 0 }, n2[SIZE] = { 0 };
	
	sci_not_t num1 = { 0 }, num2 = { 0 };
    scanf("%s%s",n1, n2);
	num1.mantissa = atof(strtok(n1, "e"));
	num1.exponent = atoi(strtok(NULL, " "));
	num2.mantissa = atof(strtok(n2, "e"));
	num2.exponent = atoi(strtok(NULL, " "));

	if (!(num1.mantissa >= 0.1 &&num1.mantissa < 1.0&&num2.mantissa >= 0.1&&num2.mantissa < 1.0))
	{
		printf("\nThe input is wrong!\n");
	}
	else
	{
		
		printf("\nValue input: %.5lfe%d %lfe%d\n", num1.mantissa,num1.exponent, num2.mantissa,num2.exponent);
		printf("Sum: ");
		print_sci(sum(num1, num2));
		printf("Difference: ");
		print_sci(difference(num1, num2));
		printf("Product: ");
		print_sci(product(num1, num2));
		printf("Quotient: ");
		print_sci(quotient(num1, num2));
	}
}
sci_not_t sum(sci_not_t n1, sci_not_t n2)
{
	double v1 = value(n1) , v2=value(n2);
	return science(v1 + v2);
}
sci_not_t difference(sci_not_t n1, sci_not_t n2)
{
	double v1 = value(n1), v2 = value(n2);
	return science(v1 - v2);
}
sci_not_t product(sci_not_t n1, sci_not_t n2)
{
	double v1 = value(n1), v2 = value(n2);
	return science(v1 * v2);
}
sci_not_t quotient(sci_not_t n1, sci_not_t n2)
{
	double v1 = value(n1), v2 = value(n2);
	return science(v1 / v2);
}
/*轉換成一般型態*/
double value(sci_not_t num)
{
	return num.mantissa*pow(10, num.exponent);
	}
/*轉換回科學記號格式*/
sci_not_t science(double v)
{
	sci_not_t result = { 0 };
	result.mantissa=v;
	while (result.mantissa >=1)
	{
		result.exponent += 1;
		result.mantissa /= 10;
	}
	while (result.mantissa<0.1&&result.mantissa>=0)
	{
		result.exponent -= 1;
		result.mantissa *= 10;
	}
	return result;
}
void print_sci(sci_not_t n)
{
	printf("%.5lfe%d\n", n.mantissa, n.exponent);
}
