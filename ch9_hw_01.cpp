/*
 * ch9_hw_01.cpp
 * Author:Yun Pei Chao 
 */
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#define size 5

int blob_check(int grid[size][size],int x,int y);

int main()
{
	int data[size][size] = { {1,1,0,0,0},
	                         {0,1,1,0,0},
	                         {0,0,1,0,1},
	                         {1,0,0,0,1},
	                         {0,1,0,1,1} };
	int i,j,x,y,value;
        printf("        y\n    ");
		for (j = 0;j < size;j++)
		
		printf(" %d", j);
	printf("\n");

	for (i = 0;i < size;i++)
	{
		if (i == 2)
		{
			printf("x  %d", i);
		}
		else
			printf("   %d", i);

		for (j = 0;j < size;j++)
		{
			if (data[i][j] == 1)
				printf("¡½");
			else
				printf("¡¼");
		}
		printf("\n");

	}

	printf("Enter the x-y coordinates of a cell that you want to count>");
	scanf("%d %d",&x,&y);
	
	value = blob_check(data, x, y);

	if(value==0)
		printf("The cell is not filled.\n");
	else
		printf("There are %d cells in the grid.\n", value);
		
	





	system("pause");
	return(0);
}

int blob_check(int grid[size][size], int x, int y)
{
	int total;
	
	if (x <0 || x+1 > size || y < 0 || y+1 > size || grid[x][y]==0)
		return 0;
	else{
		grid[x][y] = 0;
				total=1+blob_check(grid, x - 1, y)+
			
				blob_check(grid, x + 1, y)+
				blob_check(grid, x, y - 1)+
			
				blob_check(grid, x, y + 1)+
			
				blob_check(grid, x - 1, y - 1)+
			
				blob_check(grid, x + 1, y - 1)+
			
				blob_check(grid, x - 1, y + 1)+
			
				blob_check(grid, x + 1, y + 1);
		}
	
	return(total);
}
