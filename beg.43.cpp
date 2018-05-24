#include <iostream>
using namespace std;
int main()
{
 string s, s1, result;
 cout << "Enter string s: "<<endl;
 getline (cin, s);
 cout << "Enter string s1: "<<endl;
 getline (cin, s1);
 result = s + s1;
 cout << "Resultant String = "<< result;
 return 0;
}
