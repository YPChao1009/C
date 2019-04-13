/*
 * ch9_hw_06.cpp
 * Author:Yun Pei Chao 
 */
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>

#define SIZE 40

void order(int arr[], int times);
int binary_srch(int arr[SIZE], int target, int bottom, int top, int *found);

int main(void) {
	int i;
	int arr[SIZE];
	int target, times, ans;


	printf("Enter the amount of the elements in your list (should be smaller than 40)>");
	scanf("%d", &times);
	printf("Enter the elements in your list(seperated by space) >");

	for (i = 0; i < times; i++)
	{
		scanf("%d", &arr[i]);
	}
	order(arr, times);
	for (i = 0; i < times; i++)
	{
		printf("%d. %d\n", i + 1, arr[i]);
	}

	printf("\n\nEnter the target number =>");
	scanf("%d", &target);

	/*1. 2. 3.*/
	ans = binary_srch(arr, target, 0, times - 1, 0);

	if (ans < 0) {
		printf("The number %d isn't on the list.\n", target);
	}
	else if (ans == 0) {
		printf("The number %d is on the first place.\n", target);
	}
	else if (ans == 1) {
		printf("The number %d is on the second place.\n", target);
	}
	else if (ans == 2) {
		printf("The number %d is on the third place.\n", target);
	}
	else
	{
		printf("The number %d is on the %dth place.\n", target, ans + 1);
	}

	system("pause");
	return 0;
}

void order(int arr[], int times) {
	int i, j, min, temp;
	for (i = 0; i < times - 1; i++) {
		min = i;
		for (j = i + 1; j < times; j++) {
			if (arr[min] > arr[j]) {
				min = j;
			}
		}
		temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
}


int binary_srch(int arr[SIZE], int target, int bottom, int top, int * found)
{
	int middle;

	/*4.*/
	if (found == 0) {
		if (arr[bottom] <= arr[top]) {
			/*5.*/
			middle = (top + bottom) / 2;
		}
		else {
			return -1;
		}
	}
	/*6.*/
	if (target == arr[middle]) {
		/*7.*/
		*found++;
		return middle;
	}
	else if (arr[middle] > target) {
		/*8.*/
		return binary_srch(arr, target, bottom, middle - 1, found);
	}
	else {
		/*9.*/
		return binary_srch(arr, target, middle + 1, top, found);
	}
}
