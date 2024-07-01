#include <stdio.h>
#include <string.h>
struct fruit
{
	char name[30];
	int price;
	int point;
	int number;
	int total;
};

main()
{
	struct fruit fruit1;
	strcpy(fruit1.name, "peach");
	fruit1.price = 300;
	fruit1.point = 5;
	fruit1.number = 3;
	fruit1.total = fruit1.price * fruit1.number;
	printf("¤•i–¼:\t\t%s\n", fruit1.name);
	printf("‰¿Ši:\t\t%d‰~\n", fruit1.price);
	printf("‚¨‘E‚ß“x:\t");
	for (int i = 0; i < fruit1.point; i++)
	{
		printf("š");
	}
	printf("\n");
	printf("ŒÂ”:\t\t%dŒÂ\n", fruit1.number);
	printf("‹àŠz:\t\t\\%d-\n", fruit1.total);
}