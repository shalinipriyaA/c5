#include<iostream>
using namespace std;
int main()
{
 double base , height , area;
 char redo;
do
{
cout<<"Enter base of Triangle  "<<endl;
 cin>>base;
    cout<<"Enter height of Triangle "<<endl;
 cin>>height;
 area = 0.5 * base * height ;
   cout<<"Area of Triangle is  =  "<<area<<endl;
   cout<<"Enter y for next calculation  =  ";
 cin>>redo;
 
  }while(redo=='y');
return 0;
}


