#include <iostream>
using namespace std;
int main() 
{
	int n,p,i,j;
  cin>>n>>p;
	int a[10];
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	if(a[i]%2!=0)
	{
	for(j=i+1;j<n;j++)
	{
	if(a[j]%2!=0)
	{
	cout<<a[j];
	break;
	}
	}
	break;
	}
	}
	return 0;
}
