#include <iostream>
using namespace std;
 
int main() {
int n,reverse,remainder;
cout<<"enter no:"<<endl;
cin>>n;
while(n!=0)
{
	remainder=n%10;
	reverse=reverse*10+remainder;
	n=n/10;
}
cout<<"reverse no is="<<reverse<<endl;
	return 0;
}
