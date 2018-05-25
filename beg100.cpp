#include <iostream>
using namespace std;
int main() 
{
	int x,a,p=1;
	cin>>x;
	while(x!=0)
	{
	a=x%10;
	p=p*a;
	x=x/10;
	}
  cout<<p;
	return 0;
}
