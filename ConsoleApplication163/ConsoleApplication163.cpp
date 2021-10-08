#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n = "aeiou";
    string str;
    int cnt = 0;

    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < n.length(); j++)
        {
            if (str[i] == n[j])
                cnt++;
        }
    }
    cout << cnt;
}