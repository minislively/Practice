#include <iostream>
using namespace std;

int main()
{
    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        char num[4];

        cin >> num;

        cout << (num[0] - '0') + (num[2] - '0') << endl;
        // char을 int형으로 변환해주기 위해 - '0' 을 해줘야함. 
    }
}
