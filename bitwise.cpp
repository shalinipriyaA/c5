#include <iostream>
using namespace std;
#include<string>
int main()
{
int x,b;
cin>>x>>b;
x=x^b;
b=x^b;
x=x^b;
cout<<x<<"\t" <<b;
return 0;
}
