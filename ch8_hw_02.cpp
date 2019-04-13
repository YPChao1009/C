/*
 * ch8_hw_02.cpp
 * Author:Yun Pei Chao 
 */
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int search(const char list[][7], int size, char *target);

int
main(void)
{
		
	char COLOR_CODES[10][7] = { "black","brown","red","orange","yellow","green","blue","violet","gray","white" };
	char band[3][7];
	char choice;
	int i, b1,b2,b3;
	double value;
	do {
		printf("Enter the colors of the resistor's three bands,beginning with\n");
		printf("the band nearest the end.Type the colors in lowercase letters\n");
		printf("only,NO CAPS.\n");
		printf("Band 1 =>");
		scanf("%s", band[0]);
		printf("Band 2 =>");
		scanf("%s", band[1]);
		printf("Band 3 =>");
		scanf("%s", band[2]);
		
        b1= search(COLOR_CODES, 10, band[0]);
		b2 = search(COLOR_CODES, 10, band[1]);
		b3 = search(COLOR_CODES, 10, band[2]);
		value = (b1 * 10 + b2) * pow(10.0, b3) / 1000;

		if (b1 >= 0 && b2 >= 0 && b3 >= 0)
			printf("Resistance value: %.0f kilo-ohms\n", value);
		else {
			for (i = 0; i < 3; i++)
			{
				if (search(COLOR_CODES, 10, band[i]) < 0)
					printf("Invalid color: %s\n", band[i]);

			}
		}
		printf("Do you want to decode another resister?\n=> ");
		scanf(" %c", &choice);

		printf("\n");

	} while (choice == 'y' || choice == 'Y');





	system("pause");
	return 0;
}
int search(const char list[][7], int size, char *target)
{
	int found = -1;

	for (int i = 0; i < size; i++) {
		if (strcmp(list[i], target) == 0) {
			found = i;
			break;
		}
	}
	return(found);

}