#include <iostream>
using namespace std;
int main()
{
	int n,b,rev=0;
  cin>>n;
	while(n!=0)
	{
	b=n%10;
	rev=rev*10+b;
	n=n/10;
	}
	cout<<rev;
	return 0;
}
