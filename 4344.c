#include <stdio.h>
#include <stdlib.h>

int main() {
	int C;
	int student;
	int sum = 0;
	double avg;
	int count=0;
	scanf("%d", &C);

	int *score = malloc(sizeof(int) * C);

	for (int i = 0;i < C;i++) {
		count = 0;
		sum = 0;

		scanf("%d", &student);
		if (student != 0) {
			for (int j = 0; j < student; j++) {
				scanf("%d", &score[j]);
				sum += score[j];
			}
			avg = sum * 1.0 / student;

			for (int j = 0; j < student; j++) {
				if (avg < score[j])
					count++;
			}
			printf("%.3lf%%\n", count * 1.0 * 100 / student);
		}
		else {
			printf("0%%\n");
		}
	}

	free(score);
	return 0;
}

