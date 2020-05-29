int fibonacci(int n,int *ptr0,int *ptr1) {
	if (n == 0) {
		//printf("0");
		(*ptr0)++;
		return 0;
	}
	else if (n == 1) {
		//printf("1");
		(*ptr1)++;
		return 1;
	}
	else {
		return fibonacci(n-1,ptr0, ptr1) + fibonacci(n-2,ptr0, ptr1);
	}
}

int main() {
	int count;
	int N;

	scanf("%d",&count);
	int count0;
	int count1;

	for (int i = 0;i < count;i++) {
		count0 = 0;
		count1 = 0;
		scanf("%d", &N);
		fibonacci(N, &count0, &count1);
		printf("%d %d\n", count0, count1);
	}
	return 0;
}

