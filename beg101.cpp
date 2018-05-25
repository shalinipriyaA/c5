#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	int n,l,y,i;
	string a;
	cin>>a;
	cin>>n;
	l=a.length();
	y=l-n;
	for(i=y;i<l;i++)
	{
		printf("%c",a[i]);
	}
	return(0);	
}
