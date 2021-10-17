#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    if (t == 1)
        cout << "*";
    else
    {
        if (t % 2 == 0)
        {
            for (int i = 0; i < t/2; i++) {
                for (int j = 0; j < t; j++) {
                    cout << "* ";
                }
                cout << '\n';
                for (int k = 0; k < t; k++) {
                    cout << " *";
                }
                cout << '\n';
            }
        }
        else if (t % 2 != 0)
        {
            for (int i = 0; i < t/2; i++) {
                for (int j = 0; j < t; j++) {
                    cout << "* ";
                }
                cout << '\n';
                for (int k = 0; k < t; k++) {
                    cout << " *";
                }
                cout << '\n';
            }
            for (int k = 0; k < t; k++) {
                cout << "* ";
            }
        }
    }
}