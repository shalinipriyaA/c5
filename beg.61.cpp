#include<iostream>
using namespace std;
#include<string.h>
int main(void) 
{
	char a[100];
	int n,i,m;
	cin>>a;
	cin>>n;
	m=strlen(a);
	for(i=0;i<n;i++)
	{
	cout<<a[i];
	}
	return 0;
}
