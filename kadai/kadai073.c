#include <stdio.h>
main()
{
	int su;
	char alp;
	printf("10�i���̐���?");
	scanf("%d", &su);
	printf("�A���t�@�x�b�g(o or h or d)?");
	scanf("%s", &alp);
	switch (alp)
	{
	case'o':
	case'O':
		printf("%o\n", su);
		break;
	case'h':
	case'H':
		printf("%x\n", su);
		break;
	default:
		printf("%d\n", su);
	}
}