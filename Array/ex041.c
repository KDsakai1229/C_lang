#include <stdio.h>
main()
{
	float gokei = 0, box[3];
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("���������:");
		scanf("%f", &box[i]);
		gokei += box[i];
	}
	printf("���v��%.2f�ł�\n", gokei);
	printf("���ς�%.2f�ł�\n", gokei / 3.0);
}