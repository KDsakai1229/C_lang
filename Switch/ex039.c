#include <stdio.h>
main()
{
	int aa, bb, cc;
	char ss;
	printf("���������:");
	scanf("%c", &ss);
	printf("���������:");
	scanf("%d %d %d", &aa, &bb, &cc);
	switch (ss) {
	case'D':
	case'd':
		if (aa > bb && aa > cc) {
			printf("�ő�l��%d�ł�\n", aa);
		}
		else {
			if (bb > cc) {
				printf("�ő�l��%d�ł�\n", bb);
			}
			else {
				printf("�ő�l��%d�ł�\n", cc);
			}
		}
		break;
	case'S':
	case's':
		if (aa < bb && aa < cc) {
			printf("�ŏ��l��%d�ł�\n", aa);
		}
		else {
			if (bb < cc) {
				printf("�ŏ��l��%d�ł�\n", bb);
			}
			else {
				printf("�ŏ��l��%d�ł�\n", cc);
			}
		}
		break;
	case'G':
	case'g':
		printf("���v��%d�ł�\n", aa + bb + cc);
		break;
	case'H':
	case'h':
		printf("���ς�%.2f�ł�\n", (aa + bb + cc) / 3.0);
		break;
	default:
		printf("?????\n");
	}
}