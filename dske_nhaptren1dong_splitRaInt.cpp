#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
int n;
int a[100][100];
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
            if (a[i][k] == 0)
            {
                cout << i << " " << k << "\n";
                a[i][k] = 1;
                a[k][i] = 1;
            }
        }
    }
    return 0;
}