#include <iostream>
using namespace std;

int main()
{
    int a, n; 
    double sum = 0;;

    cin >> a;

    for (int i = 0; i < a; i++)
    {
        cin >> n;

        sum += n;
    }

    cout << fixed;
    cout.precision(2);
    cout << sum/a;
    
}