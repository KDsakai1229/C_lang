#include <stdio.h>
main()
{
	int yy;
	printf("��������:");
	scanf("%d", &yy);
	if (yy % 400 == 0) {
		printf("���邤�N�ł�\n");
	}
	else {
		if (yy % 4 == 0) {
			if (yy % 100 != 0) {
				printf("���邤�N�ł�\n");
			}
			else {
				printf("���邤�N�ł͂Ȃ�\n");
			}
		}
		else {
			printf("���邤�N�ł͂Ȃ�\n");
		}
	}
}