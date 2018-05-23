#include<iostream>
using namespace std;
void Count(string str)
{
    int up = 0, low = 0, num = 0,special = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            up++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            low++;
        else if (str[i]>= '0' && str[i]<= '9')
            num++;
        else
            special++;
    }
    cout << "Upper case letters: " << up << endl;
    cout << "Lower case letters : " << low << endl;
    cout << "Number : " << num << endl;
    cout << "Special characters : " << special << endl;
}
 int main()
{
    string str = "#Gee01fOr@gEEks07";
    Count(str);
    return 0;
}
