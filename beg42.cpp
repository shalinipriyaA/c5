#include <iostream>
using namespace std;
int main()
{
	int i;
	string s1,s;
	cout<<"enter the s1:"<<endl;
	getline (cin,s1);
	cout<<"enter the s:"<<endl;
	getline (cin,s);
	for(i=0;s1[i]!='\0';i++)
	{
	if(s1[i]>s[i])
	{
	cout<<s1<<endl;
	break;
	}
	else if(s1[i]<s[i])
	{
	cout<<s<<endl;
	break;
	}
	else
	{
	cout<<"both are equal";
	break;
	}
	}
	return 0;
}
