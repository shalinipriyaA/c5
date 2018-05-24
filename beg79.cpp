#include <iostream>
using namespace std;
int main()
{
	int x,y,c,d,p,flag=0;
	cin>>x>>y;
	c=y*x;
	for(d=1;d<=c/2;d++)
	{
	p=d*d;
	if(p==c)
	{
	cout<<"yes";
	flag=1;
	break;
	}
	}
	if(flag==0)
	cout<<"no";
	return 0;
}
