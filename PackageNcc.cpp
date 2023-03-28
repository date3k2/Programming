#include <iostream>
#include <algorithm>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
struct Pack
{
    int a;
    int b;
};
bool cmp(Pack &x, Pack &y)
{
    return x.a < y.a;
}
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    ll m;
    cin >> n;
    Pack pack[n + 1];
    fo(i, 1, n)
            cin >>
        pack[i].a >> pack[i].b;
    cin >> m;
    sort(pack + 1, pack + 1 + n, cmp);
    fo(i, 1, n) if (m > pack[i].b)
        m -= pack[i].b;
    else
    {
        cout << pack[i].a;
        break;
    }
    return 0;
}