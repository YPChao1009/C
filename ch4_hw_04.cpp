/*
 * ch4_hw_04.cpp
 * Author:Yun Pei Chao 
 */
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	char color;
	printf("Enter the first letter of the cylinder's color=> ");
	scanf("%c", &color);
	
    printf("The cylinder's color is ",color);
	
	switch (color) {
	case 'O':
	case 'o':
		printf("ammonia \n");
		break;
	case 'B':
	case 'b':
		printf("carbon monoxide \n");
		break;
	case 'Y':
	case 'y':
		printf("hydrogen \n");
		break;
	case 'G':
	case 'g':
		printf("oxygen \n");
		break;
	}
		system("pause");
		return 0;
	
}
