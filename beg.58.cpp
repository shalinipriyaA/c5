#include <iostream>
using namespace std;
int main() {
	int a,b,temp;
	cin>>a>>b;
	a=a^b;
	b=a^b;
	a=a^b;
	cout<<a<<"\t"<<b;
	return 0;
}
