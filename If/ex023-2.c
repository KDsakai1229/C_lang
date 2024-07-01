#include <stdio.h>
main()
{
	int yy;
	printf("西暦を入力:");
	scanf("%d", &yy);
	if (yy % 400 == 0) {
		printf("うるう年です\n");
	}
	else {
		if (yy % 4 == 0) {
			if (yy % 100 != 0) {
				printf("うるう年です\n");
			}
			else {
				printf("うるう年ではない\n");
			}
		}
		else {
			printf("うるう年ではない\n");
		}
	}
}