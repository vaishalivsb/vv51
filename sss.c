#include<stdio.h>
int main()
{
	int a;
		scanf("%d",&a);
	printf("1 is sunday,2 is saturday\n");
	switch(a)
	{
		case 1:
		printf("yes");
		case 2:
		printf("yes");
		default :
		printf("no");
	}
	return 0;
}
