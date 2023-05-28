#include <bits/stdc++.h>
#define loop(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        loop(i, 1, n)
        {
            int x;
            cin >> x;
            cout << n + 1 - x << " ";
        }
        cout << "\n";
    }
    return 0;
}