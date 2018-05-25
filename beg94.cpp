#include <iostream>
using namespace std;
int main() {
	int n,k,a[n],i;
	cin>>n>>k;
	if(k>n)
	cout<<"invalid";
	else
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
	cout<<a[k-1];
	return 0;
}
