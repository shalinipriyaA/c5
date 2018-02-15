#include <iostream>
using namespace std;

int main() {
	int n,i,sum=1;
	cout<<"enter num"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	sum=sum*i;
	}
	cout<<"the factorial of"<<n<<"is"<<sum<<endl;
	return 0;
}
