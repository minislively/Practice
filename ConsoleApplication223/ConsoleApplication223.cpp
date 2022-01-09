#include<iostream>
using namespace std;
int n[1000][1000];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a, b, t, check = 0;
    cin >> t >> a >> b;
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            cin >> n[i][j];
        }
    }
    for (int i = 0; i < t; i++) {
        if (n[a - 1][b - 1] < n[a - 1][i]) {
            cout << "ANGRY" << '\n';
            check = 1;
            break;
        }
        if (n[a - 1][b - 1] < n[i][b - 1]) {
            cout << "ANGRY" << '\n';
            check = 1;
            break;
        }
    }
    if (check == 0) cout << "HAPPY" << '\n';
}