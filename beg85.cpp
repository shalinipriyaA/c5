#include <iostream>
using namespace std;
int main()
{
	string  s;
	int i,n;
	cout<<"Enter the string"<<endl;
	cin>>s;
	n=s.length();
	for(i=0;i<n;i++)
	{
	if(i%2==0)
	{
	cout<<s[i];
	}
            }
            cout<<" ";
	for(i=0;i<n;i++)
	{
	if(i%2!=0)
	{
	cout<<s[i];
	}
	}
	return 0;
}
