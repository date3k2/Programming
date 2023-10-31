// Họ và tên: Nguyễn Duy Đạt
// MSSV: 20215343
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<pair<int, int>> m;
    int x, y;
    while (cin >> x >> y) {
        m.push_back({x, y});
    }
    sort(m.begin(), m.end(),[] (pair<int, int> a, pair<int, int> b) {
        return a.second > b.second || (a.second == b.second && a.first > b.first);
    });
    for (auto it : m) {
        cout << it.first << ' ' << it.second <<'\n';
    }
}