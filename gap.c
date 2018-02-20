#include<stdio.h>
#include<string.h>
int main()
{
	int b=0,i,l;
char a[50];
scanf("%c",&a);
l=strlen(a);
for(i=0;i<=l;i++)
{
	if(a[i]!=" ")
{
b++;	
}	
}
printf("%d",b);
return 0;
}
