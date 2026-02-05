// 대소문자 변환 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	char str[80];
	int i;
	int count = sizeof(str) / sizeof(str[0]);
	int pos; // 문자열에서 \0값이 처음 나오는 위치(배열 인덱스)

	printf("문자열 입력 : ");
	gets(str);		// DON'T Worry, Be Happy~ --> don't warry, be happy => 바뀐 문자가 7

	for (i = 0; i < count; i++) {
		if (str[i] == '\0') {
			pos = i;
			break;
		}
	}



	puts(str);
}