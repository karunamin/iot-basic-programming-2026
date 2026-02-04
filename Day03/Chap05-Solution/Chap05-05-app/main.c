// 구구단 프로그램

#include <stdio.h>

int main(void) {
	int i, j; // i => 단, j => 곱할 수

	for (j = 1; j <= 9; j++) {
		printf("%d단 시작\n",j);
		printf("--------------->\n");
		for (i = 1; i <= 9; i++) {
			printf("%d * %d = %2d\t", j, i, i * j);

		}
		printf("\n");
	}


}