#include <stdio.h>
#include <stdlib.h>

int main() {
	int N;
	scanf("%d", &N);

	int* arr = malloc(sizeof(int) * N);

	for(int i =0;i<N;i++)
		scanf("%d", &arr[i]);
	
	int tmp;
	for (int i = 0;i < N;i++) {
		for (int j = i;j < N;j++) {
			if (arr[i] > arr[j]) {
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}


	for (int i = 0;i < N;i++)
		printf("%d\n", arr[i]);


	free(arr);
	return 0;
}

