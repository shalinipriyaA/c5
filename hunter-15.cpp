#include <iostream>
using namespace std;
 int maxSum(int arr[], int n, int k)
{
        if (n < k)
    {
       cout << "Invalid";
       return -1;
    }
         int res = 0;
    for (int i=0; i<k; i++)
       res += arr[i];
         int curr_sum = res;
    for (int i=k; i<n; i++)
    {
       curr_sum += arr[i] - arr[i-k];
       res = max(res, curr_sum);
    }
     return res;
}
 int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int k = 5;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << maxSum(arr, n, k);
    return 0;
}
