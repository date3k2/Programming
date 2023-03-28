
#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
int n, k, a[1000];
bool check[1000];
string s;
int co = 0;
void Print(string s)
{
    static int c = 0;
    int sum = 0;
    fo(i, 0, s.length() - 1) if (s[i] == '1') sum += a[i + 1];
    if (sum == k)
    {
        c++;
        fo(i, 1, n) if (s[i - 1] == '1') cout << a[i] << " ";
        cout << "\n";
    }
    co = c;
}
void Generate(int k)
{
    fo(i, 0, 1)
    {
        string temp = s;
        s += (i - '0' + 96);
        if (k == n)
            Print(s);
        else
            Generate(k + 1);
        s = temp;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    fo(i, 1, n) cin >> a[i];
    fill(check + 1, check + 1 + n, 1);
    // Search(k);
    Generate(1);
    cout << co;
    return 0;
}