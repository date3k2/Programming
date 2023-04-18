#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
bool isPalindrome(string s)
{
    fo(i, 0, s.length() - 1) if (s[i] != s[s.length() - 1 - i]) return false;
    return true;
}
void Print(string s)
{
    fo(i, 0, s.length() - 1)
            cout
        << s[i] << " ";
    cout << "\n";
}
string s;
int n;
void Generate(int k)
{
    fo(i, 0, 1)
    {
        string temp = s;
        s += (i - '0' + 96);
        if (k == n)
        {
            if (isPalindrome(s))
                Print(s);
        }
        else
            Generate(k + 1);
        s = temp;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    Generate(1);
    return 0;
}