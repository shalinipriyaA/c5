#include <iostream>
using namespace std;
int main()
{
	string s;
	int i,flag=0,j;
	cin>>s;
	for(i=0;s[i]!='\0';i++)
	{
	for(j=i+1;s[j]!=0;j++)
	{
	if(s[i]==s[j])
	{
	cout<<"no";
	flag=1;
	break;
	}
	}
	if(flag==1)
	break;
	}
  if(flag==0)
  {  
	cout<<"yes";
  }
	return 0;
}
