#include <stdio.h>
int main() {
	int hamburger[3];
	int coke,cider;

	scanf("%d", &hamburger[0]);
	scanf("%d", &hamburger[1]);
	scanf("%d", &hamburger[2]);
	scanf("%d", &coke);
	scanf("%d", &cider);

	int set = hamburger[0];
	for (int i = 1;i < 3;i++) {
		if (set > hamburger[i])
			set = hamburger[i];
	}
	if (coke > cider)
		set += cider - 50;
	else
		set += coke - 50;

	printf("%d", set);
	return 0;
}

