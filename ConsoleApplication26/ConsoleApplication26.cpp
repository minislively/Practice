#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    
    if (a == 2)
    {
        if (b == 18)
            cout << "Special";
        else if (b<=17)
            cout << "After";
        else if (b >= 19)
            cout << "Before";
    }
    else if (a == 1)
    {
        cout << "Before";
    }
    else if (a > 2)
    {
        cout << "After";
    }
   

}