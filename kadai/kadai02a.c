#include <stdio.h>
main()
{
	double su1, su2;
	printf("2�̎����l?");
	scanf("%lf%lf", &su1, &su2);
	printf("***%lf��%lf�̎l�����Z***\n", su1, su2);
	printf("�a=%lf\n", su1 + su2);
	printf("��=%lf\n", su1 - su2);
	printf("��=%lf\n", su1 * su2);
	printf("��=%lf\n", su1 / su2);
}