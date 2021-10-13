#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    string str;
    string A = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string a = "abcdefghijklmnopqrstuvwxyz";
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < a.length(); j++)
        {
            if (str[i] == a[j])
                cout << A[j];
        }
    }
    
}