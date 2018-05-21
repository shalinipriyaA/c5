#include<stdio.h>
	int main()
	{
	int a;
	char ch;
	scanf("%d",&a);
	if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
	{
	printf("%d not a number",&a);
	}
	else
	{
	printf("%d number",&a);
	}
	return 0;
	}
