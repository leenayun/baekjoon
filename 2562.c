#include <stdio.h>
int main() {
	int N[9];
	int max, maxIndex;

	scanf("%d", &N[0]);
	max = N[0];
	maxIndex = 1;


	for (int i = 1;i < 9;i++) {
		scanf("%d", &N[i]);
		if (N[i] > max) {
			max = N[i];
			maxIndex = i+1;
		}

	}
	printf("%d\n", max);
	printf("%d\n", maxIndex);

	return 0;
}

