#include <iostream>
using namespace std;
void RotatebyOne(int arr[], int n);
void Rotate(int arr[], int d, int n)
{
int i;
for (i = 0; i < d; i++)
	RotatebyOne(arr, n);
}

void RotatebyOne(int arr[], int n)
{
int i, temp;
temp = arr[0];
for (i = 0; i < n-1; i++)
	arr[i] = arr[i+1];
arr[i] = temp;
}
void printArray(int arr[], int size)
{
int i;
for(i = 0; i < size; i++)
	printf("%d ", arr[i]);
}
int main()
{
int arr[] = {1, 2, 3, 4, 5, 6, 7};
Rotate(arr, 2, 7);
printArray(arr, 7);
getchar();
return 0;
}
