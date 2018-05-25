#include <iostream>
using namespace std;
int main() {
  int N,K,A[100],i,count=0;
  cout<<"Enter then number of elements in the array:"<<endl;
  cin>>N;
  cout<<" Enter the value of K:"<<endl;
  cin>>K;
  for(i = 0;i<N;i++){
    cin>>A[i];
   }
    for(i = 0;i<N;i++){
      if(A[i] == K)
        count++;
      else
        continue;
     }
    cout<<count;
     return 0;
}
