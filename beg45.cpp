#include <iostream>
using namespace std;
int main() 
{
	char b[10];
	int i,count=0;
	cin>>b;
	for(i=0;b[i]!='\0';i++)
	{
	if(b[i]>='0' && b[i]<='9')
	{
	count=count+1;
	}
	}
            cout<<count;
	return 0;
}
