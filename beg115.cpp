#include <iostream>
using namespace std;
int main() 
{
	int x,y,i,a[10],tem;
	cin>>x>>y;
	for(i=0;i<x;i++)
	{
	cin>>a[i];
	}
	for(i=0;i<x;i++)
	{
	if(a[i]>a[i+1])
	{
	tem=a[i];
	a[i]=a[i+1];
	a[i+1]=tem;
	}
	}
            cout<<a[y-1];
	return 0;
}
