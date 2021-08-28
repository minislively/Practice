#include <iostream>
using namespace std;

int print(int a, int b, int c)
{
    if (a > b && a > c)
    {
        if (b + c > a)
        {
            if (b == c)
                return 1;
            else
                return 2;

        }
        else
        {
            return 3;
        }
    }
    else if (b > a && b > c)
    {
        if (a + c > b)
        {
            if (a == c)
                return 1;
            else
                return 2;
        }
        else
            return 3;
    }
    else if (c > a && c > b)
    {
        if (a + b > c)
        {
            if (a == b)
                return 1;
            else
                return 2;
        }
        else
            return 3;
    }
    else if (a == b && a == c)
        return 0;
}
int main()
{
    int a, b, c, x=0;


    for (int i = 0; i < 1000; i++)
    {
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0)
            break;
        x = print(a, b, c);
        if (x == 0)
            cout << "Equilateral" << endl;
        else if (x == 1)
            cout << "Isosceles" << endl;
        else if (x == 2)
            cout << "Scalene" << endl;
        else if (x == 3)
            cout << "Invalid" << endl;
        
    }
}