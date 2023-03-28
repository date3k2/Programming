#include <map>
#include <iostream>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
int n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    int a[n + 1];
    map<int, int> m;
    fo(i, 1, n)
    {
        cin >> a[i];
        ++m[a[i]];
    }
    ll sumCouple = 0;
    for (auto i : m)
        sumCouple += (ll)i.second * (i.second - 1) / 2;
    fo(i, 1, n)
            cout
        << sumCouple - m[a[i]] + 1 << "\n";
    return 0;
}