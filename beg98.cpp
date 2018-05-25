#include <iostream>
using namespace std;
int main() 
{
	int b,i,a[10];
	cin>>b;  
	for(i=1;i<=b;i++)  
	{  
	cin>>a[i];    
	if(a[i]!=i)    
	{
	cout<<i;      
	break;
      	}    
	}
	return 0;
}
