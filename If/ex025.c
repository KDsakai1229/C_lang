#include <stdio.h>
main()
{
	char aa;
	printf("���������:");
	scanf("%c", &aa);
	if ((aa >= 'A' && aa <= 'Z') || (aa >= 'a' && aa <= 'z')) {
		printf("�A���t�@�x�b�g�ł�\n");
	}
	else{
		if (aa >= '0' && aa <= '9') {
			printf("�����ł�\n");
		}
		else {
			printf("���̑��̕����ł�\n");
		}
	}
}