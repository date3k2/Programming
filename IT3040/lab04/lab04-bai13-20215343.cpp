#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*
Nguyen Duy Dat - 20215343
*/
int n;
string str;
ll res = 0; // ket qua
map<int, int> m;
void solve()
{
    int c0 = 0, c1 = 0;
    map<int, int>::iterator it;

    for (int i = 0; i < n; i++)
    {
        str[i] == '0' ? ++c0 : ++c1;
        m[c1 - c0]++;
    }
    for (auto [u, v] : m)
    {
        res += v * (v - 1) / 2;
        if (u == 0)
            res += v;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> str;
    n = str.length();
    solve();
    cout << res;
    return 0;
}