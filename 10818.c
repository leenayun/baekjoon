#include <stdio.h>
int main() {
	int N;
	int min=0, max=0;
	int num;

	scanf("%d", &N);
	
	scanf("%d", &num);
	min = num;
	max = num;

	for (int i = 0;i < N-1;i++) {
		scanf("%d", &num);
		if (num < min)min = num;
		else if (num > max)max = num;
	}
	printf("%d %d", min, max);
	return 0;
}

