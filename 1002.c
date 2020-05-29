#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {

	int x1,x2,y1,y2;
	int r1, r2;
	int num;

	scanf("%d",&num);

	for (int i = 0;i < num;i++) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		if (x1 == x2 && y1 == y2) {
			if (r2 == r1) {// 같은중심,같은거리 => 같은 원 (무한대)
				printf("-1\n");
			}
			else { // 같은중심,다른거리 => 만나는 점 X
				printf("0\n");
			}
		}
		else {
			double d = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

			if (r1 + r2 < d || d + r1 < r2 || d + r2 < r1) 
				printf("0\n");
			else if (r1 + r2 == d || d + r1 == r2 || d + r2 == r1)
				printf("1\n");
			else 
				printf("2\n");
		}
	}
	return 0;
}
