#include<iostream>
using namespace std;
 int main()
{
    int a[5][5],d1sum=0,d2sum=0,m,i,j;
    cout<<"Enter size of the square matrix:";
    cin>>m;
    cout<<"\nEnter the Matrix row wise:\n";
    
    for(i=0;i<m;i++)
        for(j=0;j<m;++j)
            cin>>a[i][j];
            
    for(i=0;i<m;++i)
        for(j=0;j<m;++j)
        {
            if(i==j)
                d1sum+=a[i][j];
            if(i+j==(m-1))
                d2sum+=a[i][j];
        }
    cout<<"\nproduct of the sum of diagonal is:"<<d1sum*d2sum<<endl;
 
    return 0;
}
