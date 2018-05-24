#include<iostream>
using namespace std;
int main()
{
int a[50],i,n,larger,smaller;
cin>>n;
for(i=0;i<n;++i)
cin>>a[i];
larger=smaller=a[0];
for(i=1;i<n;++i)
{
if(a[i]>larger)
larger=a[i];
if(a[i]<smaller)
smaller=a[i];
}
cout<<smaller;
cout<<"\t"<<larger;
return 0;
}
