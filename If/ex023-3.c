#include <stdio.h>
main()
{
	int flg, aa, bb;
	printf("演算子を入力:");
	scanf("%d", &flg);
	printf("2つの整数を入力:");
	scanf("%d%d", &aa, &bb);
	if (flg == 1) {
		printf("%d+%d=%d\n", aa, bb, aa + bb);
	}
	else {
		if (flg == 2) {
			printf("%d-%d=%d\n", aa, bb, aa - bb);
		}
		else {
			if (flg == 3) {
				printf("%d*%d=%d\n", aa, bb, aa * bb);
			}
			else {
				if (flg == 4) {
					printf("%d/%d=%d\n", aa, bb, aa / bb);
				}
			}
		}
	}
}