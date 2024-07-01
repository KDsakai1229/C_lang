#include <stdio.h>

struct day
{
	int nen;
	int tuki;
	int hi;
};
struct profile
{
	char name[20];
	struct day birth;
	char blood[5];
};

main()
{
	struct profile student[5] = 
	{
		{"aaa",{2001,7,5},"A"},
		{"bbb",{2013,2,18},"AB"},
		{"ccc",{1994,5,24},"O"},
		{"ddd",{2006,11,10},"A"},
		{"eee",{2002,2,15},"B"}
	};
	struct profile* p;

	p = student;

	int i;
	

	for (i = 0; i < 5; i++)
	{
		if (p->birth.tuki == 2)
		{
			printf("%s--%d”N%02dŒŽ%02d“ú¶‚Ü‚ê ŒŒ‰tŒ^-%sŒ^\n",
				p->name, p->birth.nen, p->birth.tuki, p->birth.hi, p->blood);
		}
		p++;
	}
}