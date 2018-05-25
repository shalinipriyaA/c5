#include <iostream>
using namespace std;
int main()
{
	int n,flag=0,i;
	cin>>n;
	if(n%2!=0 && n>3)
	{
	for(i=3;i<n;i++)
	{
	if(n%i==0)
	{
	flag=1;
	break;
	}
	}
	}
	if(flag==1)
	{
	cout<<"yes";
	}
	else
    cout<<"no";
	return 0;
}
