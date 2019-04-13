/*
 * ch10_hw_05.cpp
 * Author:Yun Pei Chao 
 */
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

typedef struct {
	int xx, yy, zz, mm;
	char nickname[10];
}address_t;

int scan_address(FILE *data, address_t *add);
void print_address(address_t add);
int local_address(address_t add1, address_t add2);

int main(void)
{
	FILE *inp;
	int status, n = 0, i, j;
	address_t add[SIZE] = { 0 };

	inp = fopen("ch10_hw_05-inp.txt", "r");

	status = scan_address(inp, &add[n]);
	/*如果scan到none就結束↓*/
	while (add[n].xx != 0 && add[n].yy != 0 && add[n].zz != 0 && add[n].mm != 0 && add[n].nickname != "none") {
		print_address(add[n]);
		n += 1;
		status = scan_address(inp, &add[n]);
	}

	/*比對網址*/
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (local_address(add[i], add[j]) == 1) {
				printf("\nMachines %s and %s are on the same local network.\n", add[i].nickname, add[j].nickname);
			}
		}
	}

	fclose(inp);

	system("pause");
	return(0);
}

int scan_address(FILE *data, address_t *add)
{
	return (fscanf(data, "%d.%d.%d.%d %s", &add->xx, &add->yy, &add->zz, &add->mm, add->nickname));
}

void print_address(address_t add)
{
	printf("%d.%d.%d.%d %s\n", add.xx, add.yy, add.zz, add.mm, add.nickname);
}

int local_address(address_t add1, address_t add2)
{
	if (add1.xx == add2.xx && add1.yy == add2.yy) 
		return 1;
	
	else 
		return 0;
	
}