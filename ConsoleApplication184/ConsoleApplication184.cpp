#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main() {
    int n, sum=0;
    string str;
    cin >> n >> str;
    for (int i = 0; i < n; i++) {
        if (isdigit(str[i]))
            sum = sum + isdigit(str[i]);
    }
    cout << sum;
}