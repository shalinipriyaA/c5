#include<iostream>
using namespace std;
int main(void)
{
char str[1000];
	int s=0,i;
	cout<<"enter the string ";
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
		{
		s++;
		break;
			
		}
	}
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0'&&str[i]<='9')
		{
		s++;
		break;
			
		}
	}
	if(s==2)
	cout<<"yes";
	else
	cout<<"no";
		return 0;
  }
