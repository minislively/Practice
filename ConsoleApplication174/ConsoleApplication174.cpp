#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t, w, h, a;
    cin >> t >> w >> h;

    int z = w * w + h * h;
    int x = sqrt(z);

    for (int i = 0; i < t; i++) {
        cin >> a;
        if (a <= x)
            cout << "DA" << '\n';
        else 
            cout << "NE" << '\n';
    }
}