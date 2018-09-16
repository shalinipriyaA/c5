#include <iostream>
using namespace std;
void colinear(int x1,int x2,int x3,int y1,int y2,int y3);
int main() {
	int x1,x2,x3,y1,y2,y3;
	cin>>x1>>y1;
	cin>>x2>>y2;
	cin>>x3>>y3;
	colinear(x1,x2,x3,y1,y2,y3);
	return 0;
}
void colinear(int x1,int x2,int x3,int y1,int y2,int y3)
{
	int a;
	a=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
	if(a==0)
	cout<<"yes";
	else
	cout<<"no";
}
