#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
int t;
string s;
char a[3] = {'0', '1', '2'};
vector<string> ans;
bool isT2(string s)
{
    int count = 0;
    fo(i, 0, s.length() - 1) if (s[i] == '2') count++;
    if (count > s.length() / 2)
        return 1;
    return 0;
}
void backTracking(int k)
{
    fo(i, 0, 2)
    {
        s[k] = a[i];
        if (k == s.length() - 1)
        {
            if (isT2(s) == 1 && s[0] != '0')
                ans.push_back(s);
        }
        else
            backTracking(k + 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    s = "0";
    fo(i, 1, 9)
    {
        backTracking(0);
        s += '0';
    }
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        fo(i, 0, n - 1)
                cout
            << ans[i] << " ";
        cout << "\n";
    }
    return 0;
}