#include <stdio.h>
main()
{
	char idata;
	printf("アルファベット?");
	scanf("%s", &idata);
	switch(idata)
	{
	case'a':
	case'A':
		printf("Amerika\nAustralia\n");
		break;
	case'e':
	case'E':
		printf("England\n");
		break;
	case'f':
	case'F':
		printf("France\n");
		break;
	case'j':
	case'J':
		printf("Japan\n");
		break;
	}
}