#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, a, b) for (int i = a; i != b; ++i)
struct Castle
{
    int a, k;
};
int n, s;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n >> s;
    Castle c[n];
    loop(i, 0, n) cin >> c[i].a >> c[i].k;
    sort(c, c + n, [](Castle &u, Castle &v)
         { return u.k > v.k; });
    // loop(i, 0, n)
    // {
    //     cout << c[i].a << " " << c[i].k << endl;
    // }
    int i = 0;
    while (s > 0 && i < n)
    {
        int t = c[i].a / c[i].k;
        t = min(t, s);
        s -= t;
        c[i].a -= t * c[i].k;
        ++i;
        cout << t << " " << s << endl;
    }
    cout << "------------------------------\n";
    loop(i, 0, n)
    {
        cout << c[i].a << " " << c[i].k << endl;
    }
    return 0;
}