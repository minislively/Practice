#include<iostream>
using namespace std;
int main() {
    int a[5];
    int x = 0, temp = 0;
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++) {
        x = a[i];
        for (int j = 0; i < 5; j++) {
            a[i] = a[j];
            a[j] = x;
        }
        cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << '\n';
    }

}