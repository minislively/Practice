﻿#include<iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;
    if (a + d < b + c)cout << a + d << '\n';
    else if (a + d >= b + c)cout << b + c << '\n';
}