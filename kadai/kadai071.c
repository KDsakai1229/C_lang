#include <stdio.h>
main()
{
	int ia, ib;
	char en;
	printf("®”1?");
	scanf("%d", &ia);
	printf("®”2?");
	scanf("%d", &ib);
	printf("‰‰Zq?");
	scanf("%s", &en);
	switch (en)
	{
	case'+':
		printf("%d+%d=%d", ia, ib, ia + ib);
		break;
	case'-':
		printf("%d-%d=%d", ia, ib, ia - ib);
		break;
	case'*':
		printf("%d*%d=%d", ia, ib, ia * ib);
		break;
	case'/':
		printf("%d/%d=%d", ia, ib, ia / ib);
		break;
	case'%':
		printf("%d/%d=%d...%d", ia, ib, ia / ib, ia % ib);
	}
}