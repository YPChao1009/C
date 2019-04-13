/*
 * ch5_hw_13.cpp
 * Author:Yun Pei Chao 
 */
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	FILE *in  ;
	double avg;
	int Hit = 0, Out = 0;
	int chick = 0, count = 0;
	int i = 0;
	char ctl;
	char N[3] = { ' ',' ',' ' };
	in = fopen("TEXT.txt", "r");
	printf("Player>");
	do
	{
		chick = fscanf(in, "%c", &ctl);
		if ((int)ctl >= 48 && ctl <= 59)
		{
			N[i] = ctl;
			printf("%c", ctl);
		}
		else if (ctl == ' ')
		{
			count++;
			printf("'s record:");
		}
		else if ((int)ctl == 10)
		{
			printf("\n");
			avg = (double)Hit / (double)(Hit + Out);
			Hit = 0;
			Out = 0;
			printf("Player %c%c's batting average:%.3f\n", N[0], N[1], avg);
			N[0] = ' ';
			N[1] = ' ';
			i = -1;
			if (count < 3)
			{
				printf("Player ");
			}
			else {
				break;
			}
		}
		else {
			if (ctl == 'H') {
				Hit += 1;
			}
			else if (ctl == 'O') {
				Out += 1;
			}
			printf("%c", ctl);
		}
		i++;
	} while (chick == 1);
	system("pause");
	return 0;
}


