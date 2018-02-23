#include <iostream>
using namespace std;

int main() 
{
char day[100];
cout<<"Enter a character"<<endl;
cin>>day;
if(day=="saturday"||day=="sunday")
{
printf("yes,holiday");
}
else
{
printf("no,regular day");
}
	return 0;
}
