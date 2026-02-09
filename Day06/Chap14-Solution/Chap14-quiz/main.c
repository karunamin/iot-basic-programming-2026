// 14장 3번 퀴즈

#include <stdio.h>

int main(void) {

	char mark[5][5] = { 0 };
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (i+j==4 || i==j)mark[i][j] = 'X';
		}
	}

	// 결과 출력
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			
			if (mark[i][j] != 0) {
				printf("[%c]", mark[i][j]);
			}
			else {
				printf("[ ]");
			}
		}
		printf("\n");
	}



	return 0;
}