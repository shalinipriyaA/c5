#include<bits/stdc++.h>
using namespace std;
 bool isPalindrome(string str)
{
    int len = str.length();
         for (int i = 0; i < len/2; i++ )
        if (str[i] != str[len-i-1])
            return false;
     return true;
}
 bool checkPalindromePair(vector <string> vect)
{
      for (int i = 0; i< vect.size()-1; i++)
    {
        for (int j = i+1; j< vect.size() ; j++)
        {
            string check_str = "";
                         check_str = check_str + vect[i] + vect[j];
                         if (isPalindrome(check_str))
                return true;
        }
    }
    return false;
}
int main()
{
    vector <string> vect = {"ggqwwaaa"};
      checkPalindromePair(vect)? cout << "Yes" :
                               cout << "No";
    return 0;
}
