#include <iostream>
using namespace std;
#include<string>
int main()
{
	int a,b;
	cin>>a>>b;
	a=a^b;
	b=a^b;
	a=a^b;
	cout<<a<<"\t" <<b;
	return 0;
}
