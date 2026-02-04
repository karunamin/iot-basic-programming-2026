// 반복문

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	/*
	* while 문
	* whil(조건) {	// 조건이 참인동안
	*	실행문	// 반복
	*}
	*/
	int a = 1; // 초기화 중요

	while (a < 10){
		a *= 2;	// a = a * 2;
	}
	printf("a : %d\n", a); // 출력 안됨

	a = 0;

	while (a < 5) {
		printf("%5d", a++); // 얘만 출력됨
	}
	printf("\n");

	/*
	* do~while 문: 반복 내의 실행문은 무조건 한번 실행하고 반복하고자 할때
	* do {
	*	반복할 실행문
	* } while (참인 조건); 조건괄호 뒤 ; 필수!
	*/
	a = 1;

	do {
		a *= 2;
	} while (a < 10);
	printf("a : %d\n", a);

	a = 0;

	do {
		printf("%5d", a++);
	} while (a < 5);
	printf("\n");

	a = 0;
	do {
		printf("do-while실행\n");
		a--;
	} while (a >= 0);
	printf("do-while종료\n");


	return 0;
}