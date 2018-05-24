#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,n,count=0;
    char s[20];
  cout<<"Enter the string"<<endl;
    cin>>s;
    for(i=0;s[i]!=0;i++)
    {
        count++;
    }
    n=count/2;
    if(count%2!=0)
    {
        s[n]='*';
    for(i=0;s[i]!=0;i++)
    {
      cout<<s[i];
    }
    }
    else
    {
        s[n-1]='*';
        s[n]='*';
        for(i=0;s[i]!=0;i++)
        {
            cout<<s[i];
        }
    }
    return 0;
    
}
