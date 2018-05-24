#include<iostream>
using namespace std;
int main( )
{
	char st[80];
		cout << "Enter a string: ";
	cin.getline(st,80);
		int words = 0; 
		for(int i = 0; st[i] != '\0'; i++)
	{
		if (st[i] == ' ') 
		{
			words++;
		} 		
	}

	cout << "The number of words = " << words+1 << endl;

	return 0;
}
