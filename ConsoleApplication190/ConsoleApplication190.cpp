﻿#include<iostream>
using namespace std;
int main() {
    int z, w, k;
    cin >> z;
    for (int i = 0; i < z; i++) {
        cin >> w >> k;
        cout << w * k / 2 << '\n';
    }
}