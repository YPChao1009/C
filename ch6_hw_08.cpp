/*
 * ch6_hw_08.cpp
 * Author:Yun Pei Chao 
 */
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void charges(double hours,double *charge_per_hour, double *average);



int 
main(void)
{
	FILE *inp, *outp;
	int month,year,customer;
	double hours;
	int status;
	inp = fopen("usage.txt", "r");
	outp = fopen("ch6_hw_08-charges.txt", "w");

	fscanf(inp, "%d  %d", &month, &year);
	fprintf(outp,"Charges for %d/%d\n\n", month, year);
	
	status=fscanf(inp, "%d  %lf", &customer, &hours);
	fprintf(outp, "Customer  Hours used   Charge for per hour   Average cost\n");
	while (status != EOF) 
	{
		double charge_per_hour = 0, average = 0;
		charges(hours,&charge_per_hour,&average);
		fprintf(outp, "%3c%5d %8c%.1f%8c %.2f%15c %.2f\n",' ', customer,' ',  hours,' ', charge_per_hour, ' ',average);
		status = fscanf(inp, "%d  %lf", &customer, &hours);
	}
	fclose(inp);
	fclose(outp);
	system("pause");
	return 0;
}

void charges(double hours,double *charge_per_hour, double *average)
{
	if (hours <= 10)
		*charge_per_hour = 7.99;
	else if (hours > 10)
	{
		*charge_per_hour = (ceil(hours - 10))*1.99+7.99;
		}
		*average = *charge_per_hour / hours;
	

}


