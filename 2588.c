#include <stdio.h>

int main() {
	int score[3] = {0};
	int A, B;
	int result = 0;

	scanf("%d", &A);
	scanf("%d", &B);

	score[0] = A * (B % 10);
	score[1] = A * ((B % 100) / 10 ) ;
	score[2] = A * (B / 100) ;

	for (int i = 0;i < 3;i++) {
		printf("%d\n", score[i]);
	}

	score[1] *= 10;
	score[2] *= 100;

	for (int i = 0;i < 3;i++) {
		result += score[i];
	}


	printf("%d", result);

		return 0;
}

