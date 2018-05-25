#include <iostream>
using namespace std;
int main()
{
	int n,count=1;
	cin>>n;
	while(n!=0)
	{
	n=n/10;
	if(n!=0)
	{
	count=count+1;
	}
	}
	printf("%d",count);
	return 0;
}
