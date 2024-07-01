#include <stdio.h>
main()
{
	int flg, aa, bb;
	printf("‰‰Zq‚ğ“ü—Í:");
	scanf("%d", &flg);
	printf("2‚Â‚Ì®”‚ğ“ü—Í:");
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