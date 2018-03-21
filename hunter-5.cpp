#include <iostream>
#include <cstring>
using namespace std;
 int countDecoding(char *digits, int n)
{
      if (n == 0 || n == 1)
        return 1;
     int count = 0;  
        if (digits[n-1] > '0')
        count =  countDecoding(digits, n-1);
       if (digits[n-2] == '1' || (digits[n-2] == '2' && digits[n-1] < '7') )
        count +=  countDecoding(digits, n-2);
     return count;
}
 int main()
{
    char digits[] = "12258";
    int n = strlen(digits);
    cout << "Count is " << countDecoding(digits, n);
    return 0;
}
