#include <bits/stdc++.h>
using namespace std;
char cs[4]{'2', '3', '5', '7'};
string s;
bool ucv(string s)
{
    int c2 = 0, c3 = 0, c5 = 0, c7 = 0;
    int l = s.length();
    if (s[l - 1] == '2')
        return false;
    for (int i = 0; i < l; ++i)
    {
        if (s[i] == '2')
            ++c2;
        if (s[i] == '3')
            ++c3;
        if (s[i] == '5')
            ++c5;
        if (s[i] == '7')
            ++c7;
    }
    return (c2 * c3 * c5 * c7 > 0);
}
void Generate(int k, int n)
{
    for (int i = 0; i <= 3; ++i)
    {
        if (k < n)
        {
            s[k] = cs[i];
            Generate(k + 1, n);
        }
        else if (ucv(s))
        {
            cout << s << "\n";
            break;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 4; i <= n; i++)
    {
        s = "";
        for (int j = 0; j < i; j++)
            s += " ";
        Generate(0, i);
    }

    return 0;
}