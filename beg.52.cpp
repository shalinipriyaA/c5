#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"enter the number"<<endl;
cin>>a;
switch(a)
{
case 1:printf("ONE");
       break;
case 2:printf("TWO");
       break;	 
case 3:printf("THREE");
       break;
case 4:printf("FOUR");
       break;
case 5:printf("FIVE");
       break;
case 6:printf("SIX");
       break;
case 7:printf("SEVEN");
       break;
case 8:printf("EIGHT");
       break;
case 9:printf("NINE");
       break;
case 10:printf("TEN");
       break;	   
default:printf("number should be within 1 to 10");	
}
return 0;
}
