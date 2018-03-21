#include<bits/stdc++.h>
using namespace std;
 void printFirstRepeating(int arr[], int n)
{
        int min = -1;
        set<int> myset;
         for (int i = n - 1; i >= 0; i--)
    {
                if (myset.find(arr[i]) != myset.end())
            min = i;
 
        else   
            myset.insert(arr[i]);
    }
        if (min != -1)
        cout << "The first repeating element is " << arr[min];
    else
        cout << "There are no repeating elements";
}
int main()
{
    int arr[] = {1, 2, 3, 2, 3, 4, 3};
     int n = sizeof(arr) / sizeof(arr[0]);
    printFirstRepeating(arr, n);
}
