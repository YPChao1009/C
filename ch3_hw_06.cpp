/*
 * ch3_hw_06.cpp
 * Author:Yun Pei Chao 
 */
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define feet_per_mile 5280
#define feet_per_kilometer 3282
#define feet_per_second =fps
#define meters_per_second =mps
#define per_mile_kilometer = pmk

double  fps1(int Minutes, double Seconds);
double  mps1(int Minutes, double Seconds);
int
main(void)
{		
	int Minutes;
	double Seconds,fps, mps;
	double second;
	printf("                                  Minutes   Seconds\n");
	printf("Enter the time(?Minutes ?Seconds)=>");
	scanf("%d%lf", &Minutes, & Seconds );		
	printf("fps(per second feet)=%f\n", fps1(Minutes, Seconds));
	printf("mps(per second meters)=%f\n", mps1(Minutes, Seconds));	
	
	printf("Enter the time(?Minutes ?Seconds)=>");
	scanf("%d%lf", &Minutes, &Seconds);
	printf("fps(per second feet)=%f\n", fps1(Minutes, Seconds));
	printf("mps(per second meters)=%f\n", mps1(Minutes, Seconds));
	
	printf("Enter the time(?Minutes ?Seconds)=>");
	scanf("%d%lf", &Minutes, &Seconds);
	printf("fps(per second feet)=%f\n", fps1(Minutes, Seconds));
	printf("mps(per second meters)=%f\n", mps1(Minutes, Seconds));
	
	printf("Enter the time(?Minutes ?Seconds)=>");
	scanf("%d%lf", &Minutes, &Seconds);
	printf("fps(per second feet)=%f\n", fps1(Minutes, Seconds));
	printf("mps(per second meters)=%f\n", mps1(Minutes, Seconds));
	
	system("pause");
	return 0;}
double fps1(int Minutes, double Seconds)
{	
	double second;
	second = (60 * Minutes) + Seconds;
	return(feet_per_mile / second);
}
double mps1(int Minutes, double Seconds)
{	
	double second;
	double pmk;
	second = (60 * Minutes) + Seconds;
	pmk = ((double) feet_per_mile /(double) feet_per_kilometer);
	return( (pmk* 1000) / second);
}

