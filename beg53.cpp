#include <iostream>
using namespace std;
int main()
{
  int n,sum=0,c;  
  cout<<"Enter the number"<<endl;
  cin>>n;
  while(n!=0)
  {
  c=n%10;
  sum=sum+c;
  n=n/10;
  }
  cout<<"The sum is"<<"\t"<<sum;
  return 0;
}
