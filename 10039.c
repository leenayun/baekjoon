#include <stdio.h>
int main() {
	int student[5];
	int sum = 0;
	for (int i = 0;i < 5;i++) {
		scanf("%d", &student[i]);
		if (student[i] < 40) {
			student[i] = 40;
		}
		sum += student[i];
	}

	printf("%d\n", sum/5);
	return 0;
}

