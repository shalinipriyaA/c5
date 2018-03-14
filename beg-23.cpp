#include<bits/stdc++.h>
using namespace std;
 void minProduct(int arr[], int n)
{
    if (n < 2)
    {
        cout << "No pairs exists\n";
        return;
    }
        int a = arr[0], b = arr[1];
         for (int i=0; i<n; i++)
      for (int j=i+1; j<n; j++)
         if (arr[i]*arr[j] < a*b)
            a = arr[i], b = arr[j];
     cout << "Min product pair is "<< a<<"" ;
}
 int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    minProduct(arr, n);
    return 0;
}
