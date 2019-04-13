/*
 * ch10_hw_01.cpp
 * Author:Yun Pei Chao 
 */
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char make[20];
	char model[20];
	int odometer;
	
}auto_t;
typedef struct {
	int  year, month,day;
}date_t;
typedef struct {
	double capacity, current;
}tank_t;
void scan_date(FILE *data, date_t *car);
void scan_tank(FILE *data, tank_t *car);
void scan_auto(FILE *data, auto_t car);
void print_date(date_t car);
void print_tank(tank_t car);
void print_auto(auto_t car);
int
main(void)
{
	FILE *inp;
auto_t car = { 0 };
	inp = fopen("ch10_hw_01-data.txt", "r");
	



	scan_auto(inp,car);

	
		fclose(inp);
	system("pause");
	return 0;
}
void scan_date(FILE *data, date_t *car)
{
	fscanf(data, "%d %d %d", &car->month, &car->day, &car->year);
}
void scan_tank(FILE *data, tank_t *car)
{
	fscanf(data, "%lf %lf", &car->capacity, &car->current);
}

void scan_auto(FILE * data, auto_t car)
{
	int status;

	printf("Make          Model          Odometer     Manufacture date     Purchase date   Tank capacity   Current fuel level\n");
	status = fscanf(data, "%s%s%d", &car.make, &car.model, &car.odometer);
	while (status != EOF)
	{
		
		print_auto(car);

		date_t  manufacture = { 0 }, purchase = { 0 };
		scan_date(data, &manufacture);
		scan_date(data, &purchase);
		print_date(manufacture);
		print_date(purchase);

		tank_t gas = { 0 };
		scan_tank(data, &gas);
		print_tank(gas);

		status = fscanf(data, "%s%s%d", &car.make, &car.model, &car.odometer);
	}
}
void print_date(date_t car)
{
	printf("%d/%d/%d%12c", car.year, car.month, car.day, ' ');
}

void print_tank(tank_t car)
{
	printf("%-18.2lf%.2lf\n", car.capacity, car.current);
}

void print_auto(auto_t car)
{
	printf("%-14s%-15s%-15d", car.make, car.model, car.odometer);
}