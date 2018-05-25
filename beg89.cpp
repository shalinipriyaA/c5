#include <iostream>
using namespace std;
int main() 
{
	string str,temp;
	int i,k,j;
	cout<<"enter the string:"<<endl;
  getline (cin,str);
	for(i=0;str[i]!='\0';i++)
	{
	for(j=i+1;str[j]!='\0';j++)
	{
	if(str[i]>str[j])
	{
	temp[k]=str[i];
	str[i]=str[j];
	str[j]=temp[k];
	}
	}
	}
  cout<<str;
	return 0;
}
