#include <stdio.h>
main()
{
	double hankei, enshu = 3.1415;
	printf("���a?");
	scanf("%lf", &hankei);
	printf("���a=%lf\n", hankei * 2);
	printf("�~��=%lf\n", (hankei * 2) * enshu);
	printf("�ʐ�=%lf\n", hankei * hankei * enshu);
}