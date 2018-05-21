#include <iostream>
using namespace std;

int main() {
int a[20],i,m;
scanf("%d",&m);
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<m;i++)
{
printf("%d %d\n",a[i],i);
return 0;
}
	return 0;
}
