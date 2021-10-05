#include <iostream>
using namespace std;

int main()
{
    int t, n, c. sum=0;
    double g, SUM=0; 

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> c >> g;
            sum = sum + c;
            SUM = SUM + g;
        }
        cout << sum << " ";
        cout << fixed;
        cout.precision(1);
        cout << SUM / n << endl;
        sum = 0, SUM = 0;
    }
}