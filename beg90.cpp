#include <iostream>
using namespace std;
int main() {
string a;
int n,i;
cin>>a;
n=a.length();
for(i=0;i<n;i++)
{
if(a[i]>=48&&a[i]<=57)
printf("%c",a[i]);
}
	return 0;
}
