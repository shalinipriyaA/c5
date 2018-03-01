#include <iostream>
using namespace std;
int countDivisibles(int A, int B, int M,int N)
{
        int counter = 0;
        for (int i = A; i <= B; i++)
          if (i % M == 0||i % N== 0)
            counter++;
 
    return counter;
}
 
int main()
{
       int A = 10, B = 130, M = A,N = B;
         cout << countDivisibles(A, B, M, N) << endl;
     return 0;
}


