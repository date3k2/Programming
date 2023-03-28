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
        // string s = "100 123    42";
        string s;
        getline(std::cin >> std::ws, s);
        istringstream is(s);
        int k;
        while (is >> k)
        {
            cout<<k+1<<" ";
        }
    }
    return 0;
}