/*
 * ch7_hw_15.cpp
 * Author:Yun Pei Chao 
 */
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

void get_grid();
void display_grid();
int power_ok();
void where_off();

FILE *inp;
int grid[3][4];

int
main(void)
{
	

	inp = fopen("ch7_hw_15-inp.txt", "r");

	get_grid();
	display_grid();


	if (power_ok() == 1)
	{
		printf("Power is on throughout grid.\n");
	}
	else
	{
		printf("Power is off in sectors:\n");
		where_off();
	}

	fclose(inp);


	system("pause");
	return 0;
}
void get_grid()
{
	int i, j;
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 4;j++)
		{
			fscanf(inp, "%d", &grid[i][j]);
		}
	}

}
void display_grid()
{
	int i, j;
	for (i = 0;i<3;i++)
	{
		for (j = 0;j < 4;j++)
		{
			printf("%d ", grid[i][j]);
		}
		printf("\n");
	}
}
int power_ok()
{
	int i, j,sum=0;
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 4;j++)
			sum += grid[i][j];
	}
	if (sum == 12)
		{
			return 1;
		}
	else
	{
		return 0;
	}
}
void where_off()
{
	int i, j;
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 4;j++){

			if (grid[i][j] == 0)
				printf("(%d,%d)\n", i, j);
		}
	}
		

}
