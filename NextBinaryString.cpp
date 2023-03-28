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
    while (t--)
    {
        string s;
        cin>>s;
        bool check0=1;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i]=='1') 
            {
                s[i]='0';
            }
            else 
            {
                s[i]='1';
                check0=0;
                cout<<s<<"\n";
                break;
            }
        }
        if (check0) cout<<0<<s<<"\n";
    }
    return 0;
}