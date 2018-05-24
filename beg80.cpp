#include <iostream>
using namespace std;
int main() 
{
	char a[10];
	int b,i;
  cin>>a;
	for(i=0;a[i]!='\0';i++)
	{
	b=(int)(a[i]);
	if(b%2!=0)
	{
	cout<<"\t"<<a[i];	
	}
	}
	return 0;
}
