#include <iostream>
using namespace std;
int main(int nNumberofArgs, char* pszArgs[])
{
char s[50];
int i;
int letters = 0; 
int numbers = 0; 
int other = 0; 
int total; 
cout << "Enter a continuous string of characters with no blank spaces" << endl;
cout << "(example: aBc1234!@#$%)" << endl;
cout << endl;
cout << "Enter your string:";
cin >> s;
cout << endl;
i = 0;
while (s[i] !=0)
if (( s[i] >= 'a' && s[i] <= 'z') || (s[i] <= 'A' && s[i] >= 'Z'))
{
letters++;
i++;
}
else
if (( s[i] >= '!' && s[i] <= ')'))
{
other++;
}
else
if (( s[i] >= '0' && s[i] <= '9'))
{
numbers++;
}
total = letters + numbers + other;
cout << "Your string has " << total << " total characters" << endl;
cout << letters << " letters " << endl;
cout << numbers << " numerical characters " << endl;
cout << other << " other characters " << endl;
return 0;
}
