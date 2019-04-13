/*
 * ch7_hw_10.cpp
 * Author:Yun Pei Chao 
 */
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>

#define swap(x,y){int t;t=x;x=y;y=t;}

int main()
{
	int data[5][4] = { { 192,48,206,37 }, 
	                   { 147,90,312,21 }, 
					   { 186,12,121,38 }, 
					   { 114,21,408,39 }, 
			     	   { 267,13,382,29 } };
	int votes[4] = { 0 };
	char candidate[4] = { 'A','B','C','D' };
	int i, j, total = 0;
	printf("                Candidate     Candidate     Candidate     Candidate\n");
	printf("Precinct            A             B             C             D    \n");
	printf("----------------------------------------------------------------------------\n"); 
	for (i = 0; i < 5; i++)
	{
		printf("    %d  ", i + 1);
		for (j = 0; j < 4; j++)
		{
			printf("%14d", data[i][j]);
			total += data[i][j];
			switch (j)
			{
			case 0:
				votes[0] += data[i][j];
				break;
			case 1:
				votes[1] += data[i][j];
				break;
			case 2:
				votes[2] += data[i][j];
				break;
			case 3:
				votes[3] += data[i][j];
				break;
			}
		}
		printf("\n");
	}
	printf("----------------------------------------------------------------------------\n");
	printf("Total votes%10d%14d%14d%14d\n", votes[0], votes[1], votes[2], votes[3]);
	printf("Percentage %10d%14d%14d%14d\n\n", votes[0] * 100 / total, votes[1] * 100 / total, votes[2] * 100 / total, votes[3] * 100 / total);

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3 - i; j++)
		{
			if (votes[j] < votes[j + 1])
			{
				swap(votes[j], votes[j + 1]);
				swap(candidate[j], candidate[j + 1]);
			}
		}
	}
	if (votes[0] > total / 2)
		printf("Candidate %c is the winner.", candidate[0]);
	else
		printf("Candidate %c and %c should conduct a runoff election.", candidate[0], candidate[1]);

	system("pause");
	return(0);
}