#include <bits/stdc++.h>
#include <string>
using namespace std;
 string repeat(string s, int k)
{
        string s1 = s;
     for (int i=1; i<k;i++)
        s += s1; 
    return s;
}
 int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    cout << repeat(s,k) << endl;;
    return 0;
}
