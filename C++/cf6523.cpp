#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
int t;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    string cf = "codeforces";
    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;
        fo(i, 0, s.size() - 1) if (s[i] != cf[i])
            count++;
        cout << count << "\n";
    }
    return 0;
}