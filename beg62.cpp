#include<iostream>
using namespace std;
int main()
{
    char a[100];
    int i,cou=0,b=0;
    cout<<"enter the string"<<endl;
    cin>>a;
    for(i=0;a[i]!='\0';i++)
    {
        cou++;
    }
   cout<<cou<<endl;
    for(i=0;i<cou;i++)
    {
    if(a[i]=='0' || a[i]=='1')
    {
        b++;
    }
    }
cout<<b<<endl;
if(b==cou)
{
    cout<<"Yes"<<endl;
}
else
{
   cout<<"No"<<endl;
}
return 0;
}
