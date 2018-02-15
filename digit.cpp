#include <iostream>
using namespace std;

int main() {
	int n,count=0;
cout<<"enter n"<<endl;
cin>>n;
while(n!=0)
{
n=n/10;
count++;
}
cout<<"count digits:"<<count<<endl;
	return 0;
}
