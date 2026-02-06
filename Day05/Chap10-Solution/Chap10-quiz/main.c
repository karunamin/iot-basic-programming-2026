// 퀴즈

#include <stdio.h>

int main(void) {

	int a = 10;
	int b = a++ + 5;
	int x = 7;

	printf(" % d, % d\n", a, b);

	if (x % 2 == 0) {
		printf("A");
	}
	else if (x > 5) {
		printf("B");
	}
	else {
		printf("C");
	}

	return 0;
}