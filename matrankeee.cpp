#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
int n;
int a[1005][1005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    fo(i, 1, n)
    {
        string s;
        getline(std::cin >> std::ws, s);
        istringstream is(s);
        int k;
        while (is >> k)
        {
            a[i][k] = 1;
        }
    }
    fo(i, 1, n)
    {
        fo(j, 1, n) cout << a[i][j] << " ";
        cout << "\n";
    }
    return 0;
}