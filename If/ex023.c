#include <stdio.h>
main()
{
	int ss, mm, hh;
	printf("�b�������:");
	scanf("%d", &ss);
	hh = ss / 3600;
	mm = ss / 60;
	if (ss <= 5000) {
		printf("%d����%d��%d�b�ł�\n", hh, mm % 60, ss % 60);
	}
	else
	{
		printf("�G���[:�b�����傫�����܂��A5000�ȉ��̕b������͂��Ă��������B\n");
	}
}