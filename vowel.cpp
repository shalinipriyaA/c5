#include <iostream>
using namespace std;

int main() {
	char ch;
	int lower,upper;
	lower=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
	upper=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
	if(lower||upper)
	{
		cout<<"it is vowel"<<endl;
	}
	else
	{
		cout<<"it is not vowel"<<endl;
	}
	return 0;
}
