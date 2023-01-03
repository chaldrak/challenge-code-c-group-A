#include <stdio.h>
#include "entete.h"

int main() {
	int tab[] = {5, 1, 4, 2, 8};
    printf("%d\n", asciiValue(' '));
    printf("%d\n", isAlnum('5'));
    printf("%d\n", isAlpha('a'));
    printf("%d\n", isCtrl("\\"));
    printf("%d\n", isDigit('1'));
    printf("%d\n", isLower('s'));
    printf("%d\n", isPonc('a'));
    printf("%d\n", isSpace(' '));
    printf("%d\n", isLower('X'));
    printf("%d\n", isXdigit('f'));
    printf("%c\n", toLower('a'));
    printf("%c\n", toLower('C'));
    printf("%c\n", toUpper('x'));
    printf("%c\n", toUpper('F'));
    printf("%d\n", abs(4));
    printf("%d\n", abs(0));
    printf("%d\n", abs(-8));
    printf("%f\n", power(2, 3));
    printf("%d\n", flooR(-2.9));
    qsort(tab, 5);
    //printf("%s", strCat("ma", "in"));
	return 0;
}
