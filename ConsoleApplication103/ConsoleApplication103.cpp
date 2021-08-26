#include <iostream>
using namespace std;

int main()
{
    int a, b;

    for (int i = 0; i < 10000; i++)
    {
        cin >> a >> b;
        if (a != 0 && b != 0)
        {
            if (a % b == 0)
                cout << "multiple" << endl;
            else if (b % a == 0)
                cout << "factor" << endl;
            else if (a % b != 0 || b % a != 0)
                cout << "neither" << endl;
        }
        else 
            break;
    }
        
}