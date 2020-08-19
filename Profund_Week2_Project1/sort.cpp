#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int *findMaxmin(int Array[5], int mode) { //หาตำแหน่งของตัวเลขใน array ที่มากที่สุด
	int max = -1;
	int pos = 0;
	if (mode == 1) {
		max = -1;
	}
	else {
		max = 2147483647;
	}
	for (int i = 0; i < 5; i++) {
		if (mode == 1) {
			if (Array[i] > max) {
				max = Array[i];
				pos = i;
			}
		}
		else if (mode == 2){
			if (Array[i] < max) {
				max = Array[i];
				pos = i;
			}
		}
		else{
			printf("Error");
			pos = 0;
		}
	}
	return &Array[pos];
}

int main() {
	int Array[5];
	int mode;
	bool descent;
	int* a;
	printf("Enter 5 positive number : ");
	scanf("%d %d %d %d %d", &Array[0], &Array[1], &Array[2], &Array[3], &Array[4]);
	printf("Descent or Ascent? (1/2) : ");
	scanf("%d", &mode);
	for (int i = 0; i < 5; i++) {
		a = findMaxmin(Array, mode);
		printf("%d ", *a);
		if (mode == 1) {
			*a = -1;
		}
		else {
			*a = 2147483647;
		}
	}
}