#include <iostream>
using namespace std;

int main() {
	char c;
	int lower,upper;
	lower=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	upper=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
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
