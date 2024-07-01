#include <stdio.h>
main()
{
	int su;
	char alp;
	printf("10進数の整数?");
	scanf("%d", &su);
	printf("アルファベット(o or h or d)?");
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