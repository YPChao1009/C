/*
 * ch8_hw_09.cpp
 * Author:Yun Pei Chao 
 */
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(void)
{

	FILE *inp, *outp;

	char names[80];
	char names_copy[80];
	char surname[80];
	char first[80];
	char middle_init[80];
	char *status;
	inp = fopen("inp.txt", "r");
	outp = fopen("outp.txt", "w");


	

	for (status = fgets(names, 80, inp); status != 0;status = fgets(names, 80, inp)) {
		strcpy(names_copy, names);
		strncpy(surname, strtok(names_copy, ", ."), 15);
		surname[15] = '\0';
		fprintf(outp, "%-15s%3c", surname,' ');

		strncpy(first, strtok(NULL, ", ."), 10);
		first[10] = '\0';
		fprintf(outp, "%-10s", first);

		strncpy(middle_init, strtok(NULL, ", ."), 1);
		middle_init[1] = '\0';
		fprintf(outp, "%-1s", middle_init);

		fprintf(outp, "\n");
		
	}






	fclose(inp);
	fclose(outp);


	system("pause");
	return 0;
}
