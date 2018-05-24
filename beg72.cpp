#include <iostream>
using namespace std;
int main()
{
   string s;
   int l,i,count=0;
   cin>>s;
   l=s.length(); 
        for(i=0;i<l;i++)
   {
       if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
      count++;
      else
      continue;
   }
   if(count>0)
   cout<<"yes";
   else
   cout<<"no";
       
    return 0;
}
