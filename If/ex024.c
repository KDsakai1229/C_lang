#include <stdio.h>
main()
{
	char aa;
	printf("���������:");
	scanf("%c", &aa);
	if (aa >= 'A' && aa <= 'Z') {
		printf("�啶���ł�\n");
	}
	else{
		printf("���̑��̕����ł�\n");
	}
}