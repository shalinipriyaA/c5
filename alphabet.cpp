#include <iostream>
using namespace std;

int main() {
	char c;
	cout<<"enter character"<<endl;
	cin>>c;
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
	{
		cout<<"it is alphabet"<<endl;
	}
	else
	{
		cout<<"it is not alphabet"<<endl;
	}
	return 0;
}
