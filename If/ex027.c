#include <stdio.h>
main()
{
	char aa;
	printf("���������:");
	scanf("%c", &aa);
	if (aa >= 'A' && aa <= 'Z') {
		printf("�ϊ������%c\n", aa + 0x20);
	}
	else {
		if (aa >= 'a' && aa <= 'z') {
			printf("�ϊ������%c\n", aa - 0x20);
		}
		else {
			printf("�G���[:����̓A���t�@�x�b�g�ł͂���܂���\n");
		}
	}
}