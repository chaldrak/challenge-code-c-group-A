#include <stdio.h>
#include "entete.h"

int asciiValue(char c) {
	return c;
}

int isAlnum (char c) {
	int value = asciiValue(c);
	if((value >= 48 && value <= 57) || (value >= 65 && value <= 90) || (value >= 97 && value <= 122)) {
		return 1;
	}
	return 0;
}

int isAlpha (char c) {
	int value = asciiValue(c);
	if((value >= 65 && value <= 90) || (value >= 97 && value <= 122)) {
		return 1;
	}
	return 0;
}

int isCtrl (char* c) {
	return (c[0] == '^' || c[0] == '\\') ? 1 : 0;
}

int isDigit (char c) {
	int value = asciiValue(c);
	if((value >= 48 && value <= 57)) {
		return 1;
	}
	return 0;
}

int isLower (char c) {
	int value = asciiValue(c);
	if((value >= 97 && value <= 122)) {
		return 1;
	}
	return 0;
}

int isPonc (char c) {
	int value = asciiValue(c);
	int i = 0;
	int codePonc[] = {33, 34, 39, 40, 41, 44, 45, 46, 47, 58, 59, 63, 91, 93, 95, 133};
	while(codePonc[i] != '\0') {
		if(codePonc[i] == value) {
			return 1;
		}
		i++;
	}
	return 0;
}

int isSpace (char c) {
	int value = asciiValue(c);
	if(value == 32) {
		return 1;
	}
	return 0;
}

int isUpper (char c) {
	int value = asciiValue(c);
	if((value >= 65 && value <= 90)) {
		return 1;
	}
	return 0;
}

int isXdigit (char c) {
	int value = asciiValue(c);
	if((value >= 48 && value <= 57) || (value >= 65 && value <= 70) || (value >= 97 && value <= 102)) {
		return 1;
	}
	return 0;
}

char toLower (char c) {
	int value = asciiValue(c);
	if((value >= 97 && value <= 122)) {
		return c;
	}
	return value + 32;
}

char toUpper (char c) {
	int value = asciiValue(c);
	if((value >= 65 && value <= 90)) {
		return c;
	}
	return value - 32;
}

int abs(int number) {
	return number > 0 ? number : -number;
}

float power(float number, int n) {
	float res = 1;
	int i=0;
	while(i < n) {
		res *= number;
		i++;
	}
	return res;
}

int flooR(float number) {
	return number > 0 ? number : number - 1;
}

int length(int* tab) {
	int i=0, count=0;
	while(tab[i] != '\0') {
		count++;
		i++;
	}
	return count;
}

void qsort(int* tab, int size) {
	int i=0, j=0;
	for(i=0; i<=size-1; i++) {
		i = size - 1 - i;
		int tri_done = 1;
		printf("i = %d\n", i);
		for(j=0; j<=i-1; j++) {
			printf("j = %d \n", j);
			if(tab[j+1] < tab[j]) {
				int temp = tab[j+1];
				tab[j+1]=tab[j];
				tab[j]=temp;
				tri_done = 0;
			}
		}
		
	}
	for(i=0; i<=size-1; i++) {
		printf("%d - ", tab[i]);
	}
}

void printTab(int* tab, int size) {
	int i=0; 
	while(i < size) {
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}

char* strCat(char* t1, char* t2) {
	return "t1 + t2";
}
















