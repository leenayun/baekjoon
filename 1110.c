#include <stdio.h>
#include <stdlib.h>

int main() {
	int N;
	int new, num;
	int count=0;

	scanf("%d", &N);

	new = N;
	do{

		if (new < 10) {
			new = new + new * 10;
		}else {

			//printf("%d + %d = %d \n", new / 10, new % 10, new / 10 + new % 10);
			num = new / 10 + new % 10;
			//printf("%d + %d = %d \n", new % 10*10, num % 10, new % 10 + num % 10);
			new = new % 10 *10 + num % 10;
			//printf("new:: %d\n", new);
		}
		count++;

	} while (new!=N);
	
	printf("%d\n", count);


	return 0;
}

