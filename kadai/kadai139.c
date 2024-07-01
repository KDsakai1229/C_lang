#include <stdio.h>
void display(char mj, int su);
main()
{
	char mj;
	int su;
	printf("•¶š?:");
	scanf("%c", &mj);
	printf("®”?:");
	scanf("%d", &su);
	display(mj, su);
	printf("\n");
}

void display(char mj, int su)
{
	for (int i = 0; i < su; i++)
	{
		printf("%c", mj);
	}
}