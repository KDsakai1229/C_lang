#include <stdio.h>
main()
{
	int ss, mm, hh;
	printf("�b�������:");
	scanf("%d", &ss);
	
	if (ss <= 5000) {
		if (ss>=0){
			hh = ss / 3600;
			ss = ss % 3600;
			mm = ss / 60;
			ss = ss % 60;
			printf("%d����%d��%d�b�ł�\n", hh, mm, ss);
		}
		else
		{
			printf("�G���[:�}�C�i�X�ɂ͔�Ή��ł�\n");
		}
	}
	else
	{
		printf("�G���[:�b�����傫�����܂��A5000�ȉ��̕b������͂��Ă��������B\n");
	}
}