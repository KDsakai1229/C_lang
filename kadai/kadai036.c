#include <stdio.h>
main()
{
	int ia, ib;
	printf("����1?");
	scanf("%d", &ia);
	printf("����2?");
	scanf("%d", &ib);
	if (ia > ib)
	{
		printf("%d�̕���%d���%d�傫��\n", ia, ib, ia - ib);
	}
	else
	{
		if (ia < ib)
		{
			printf("%d�̕���%d���%d������\n", ia, ib, ib - ia);
		}
		else
		{
			printf("%d��%d�͓�����\n", ia, ib);
		}
	}
}