#include <stdio.h>
#include <string.h>
struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	struct profile pdat;
	printf("名前を入力:");
	scanf("%s", pdat.name);
	printf("生年月日を空白で区切って入力:");
	scanf("%d%d%d", &pdat.birth[0], &pdat.birth[1], &pdat.birth[2]);
	printf("血液型を入力:");
	scanf("%s", pdat.blood);
	printf("%s--%d年%02d月%02d日生 血液型-%s型",
		pdat.name, pdat.birth[0], pdat.birth[1], pdat.birth[2], pdat.blood);
}