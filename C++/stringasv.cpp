#include <bits/stdc++.h>
#define loop(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    while (getline(cin, s))
    {
        for (auto &c : s)
        {
            if (islower(c))
                c = toupper(c);
        }
        cout << s << endl;
    }
    return 0;
}