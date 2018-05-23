#include <iostream>
using namespace std;
int main()
{
	int b,sum=0,i;
            cin>>b;
	int a[b];
	for(i=0;i<b;i++)
	{
            cin>>a[i];	
	}
	for(i=0;i<b;i++)
	{
	sum=sum+a[i];
	}
	int avg=sum/b;
	cout<<avg;
	return 0;
}
