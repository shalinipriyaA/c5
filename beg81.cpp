#include <iostream>
using namespace std;

int main() {
  int n,a[60],b[70],i,c;
  cout<<"enter no of lines"<<endl;
  cin>>n;
  cout<<"number of the kabali team and opponent"<<endl;
  for(i=0;i<n;i++)
  {
  cin>>a[i]>>b[i];
  }
  cout<<"difference between two team number"<<endl;
  for(i=0;i<n;i++)
  {
    c=b[i]-a[i];
    if(!(c>(2^32)))
    {
    	cout<<c;
    }
  }
	return 0;
}
