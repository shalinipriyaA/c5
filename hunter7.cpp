#include<stdio.h>
 void segregateEvenOdd(int arr[], int size)
{
      int left = 0, right = size-1;
    while (left < right)
    {
               while (arr[left]%2 == 0 && left < right)
            left++;
                 while (arr[right]%2 == 1 && left < right)
            right--;
         if (left < right)
        {
                      swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }
}
 void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
 
    segregateEvenOdd(arr, arr_size);
 
    printf("Afterchanging positions:");
    for (i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
     return 0;
}
