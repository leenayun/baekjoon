#include <stdio.h>

void add(int *ptr1, int *ptr2) {
	*ptr1 += *ptr2;
}

int main() {

	//포인터를 까먹어서 공부하는 중

	int a = 1;
	int* ptrA = &a;
	
	printf("a::%d\n", a);
	printf("ptrA::%d\n", ptrA);
	printf("*ptrA::%d\n", *ptrA);

	a++;

	printf("\n a++ 결과 ------------------- \n");
	printf("a::%d\n", a);
	printf("ptrA::%d\n", ptrA);
	printf("*ptrA::%d\n", *ptrA);
	
	
	/*
	*ptrA++; // >> 주소값 증가

	printf("\n *ptrA++ 결과 ------------------- \n");
	printf("a::%d\n", a);
	printf("ptrA::%d\n", ptrA);
	printf("*ptrA::%d\n", *ptrA);
	*/

	(*ptrA)++; // >> 변수 증가

	printf("\n *ptrA++ 결과 ------------------- \n");
	printf("a::%d\n", a);
	printf("ptrA::%d\n", ptrA);
	printf("*ptrA::%d\n", *ptrA);

	int b = 10;
	int* ptrB = &b;

	add(ptrA, ptrB);

	printf("\n*ptr1 += *ptr2 결과 ------------------- \n");
	printf("a::%d\n", a);
	printf("ptrA::%d\n", ptrA);
	printf("*ptrA::%d\n", *ptrA);
	printf("*ptrB::%d\n", *ptrB);


	return 0;
}
