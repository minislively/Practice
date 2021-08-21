#include <iostream>
using namespace std;

int main()
{
    int x, y; // x : 월 y : 일

    cin >> x >> y;
    
    if (x==1 || x ==10)
    { 
        switch (y % 7) // 1일 : 월요일  
        {
        case 1:
            cout << "MON";
            break;

        case 2:
            cout << "TUE";
            break;

        case 3:
            cout << "WED";
            break;

        case 4:
            cout << "THU";
            break;

        case 5:
            cout << "FRI";
            break;

        case 6:
            cout << "SAT";
            break;

        case 0:
            cout << "SUN";
            break;
        }
    }
    if (x == 2 || x == 3 || x == 11) 
    {
        switch (y % 7) // 1일 : 목요일 
        {
        case 5:
            cout << "MON";
            break;

        case 6:
            cout << "TUE";
            break;

        case 0:
            cout << "WED";
            break;

        case 1:
            cout << "THU";
            break;

        case 2:
            cout << "FRI";
            break;

        case 3:
            cout << "SAT";
            break;

        case 4:
            cout << "SUN";
            break;
        }
    }
    if (x == 4 || x==7) 
    {
        switch (y % 7) // 1일 : 일요일 
        {
        case 2:
            cout << "MON";
            break;

        case 3:
            cout << "TUE";
            break;

        case 4:
            cout << "WED";
            break;

        case 5:
            cout << "THU";
            break;

        case 6:
            cout << "FRI";
            break;

        case 0:
            cout << "SAT";
            break;

        case 1:
            cout << "SUN";
            break;
        }
    }
    if (x == 5)
    {
        switch (y % 7) // 1일 : 화요일 
        {
        case 0:
            cout << "MON";
            break;

        case 1:
            cout << "TUE";
            break;

        case 2:
            cout << "WED";
            break;

        case 3:
            cout << "THU";
            break;

        case 4:
            cout << "FRI";
            break;

        case 5:
            cout << "SAT";
            break;

        case 6:
            cout << "SUN";
            break;
        }
    }
    if (x == 6)
    {
        switch (y % 7) // 1일 : 금요일 
        {
        case 4:
            cout << "MON";
            break;

        case 5:
            cout << "TUE";
            break;

        case 6:
            cout << "WED";
            break;

        case 0:
            cout << "THU";
            break;

        case 1:
            cout << "FRI";
            break;

        case 2:
            cout << "SAT";
            break;

        case 3:
            cout << "SUN";
            break;
        }
    }
    if (x == 8)
    {
        switch (y % 7) // 1일 : 수요일 
        {
        case 6:
            cout << "MON";
            break;

        case 0:
            cout << "TUE";
            break;

        case 1:
            cout << "WED";
            break;

        case 2:
            cout << "THU";
            break;

        case 3:
            cout << "FRI";
            break;

        case 4:
            cout << "SAT";
            break;

        case 5:
            cout << "SUN";
            break;
        }
    }
    if (x == 9 || x==12)
    {
        switch (y % 7) // 1일 :  토요일 
        {
        case 3:
            cout << "MON";
            break;

        case 4:
            cout << "TUE";
            break;

        case 5:
            cout << "WED";
            break;

        case 6:
            cout << "THU";
            break;

        case 0:
            cout << "FRI";
            break;

        case 1:
            cout << "SAT";
            break;

        case 2:
            cout << "SUN";
            break;
        }
    }
}