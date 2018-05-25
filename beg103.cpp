#include <iostream>
using namespace std;
#include<string.h>
int main(void)
{
    string ch;
int l,i;
cout<<"enter the string ";
cin>>ch;
l=ch.length();
ch[0]=toupper(ch[0]);
for(i=1;i<l;i++)
{
if(ch[i]==32)
{
ch[i+1]=toupper(ch[i+1]);
}
}
cout<<ch;

    return 0;
}
