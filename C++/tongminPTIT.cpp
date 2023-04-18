#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
string Sum(string a, string b)
{

    string sum = "";

    short s = 0;

    while (a.length() < b.length())
        a = "0" + a;

    while (b.length() < a.length())
        b = "0" + b;

    for (int i = a.length() - 1; i >= 0; --i)
    {

        s = s + a[i] + b[i] - 96;

        if (s < 10)
        {

            sum = to_string(s) + sum;

            s = 0;
        }

        else
        {

            sum = to_string(s % 10) + sum;

            s = 1;
        }
    }

    if (s == 1)
        sum = '1' + sum;
    if (sum[0] == '0')
        return sum.substr(1);
    return sum;
}
int t;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char a[n + 1];
        fo(i, 1, n) cin >> a[i];
        string A = "", B = "";
        sort(a + 1, a + 1 + n);
        fo(i, 1, n)
        {
            if (i % 2)
                A += a[i];
            else
                B += a[i];
        }
        cout << Sum(A, B) << "\n";
    }
    return 0;
}