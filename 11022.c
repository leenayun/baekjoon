#include <stdio.h>
int main() {
	int A,B;
	int N;


	scanf("%d", &N);


	int sum = 0;
	for (int i = 0;i < N;i++) {
		scanf("%d %d", &A,&B);
		printf("Case #%d: %d + %d = %d\n", i+1,A,B,A+B);
	}

	return 0;
}

