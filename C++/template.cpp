#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
int t;
int main()
{
    // freopen("test.inp","r",stdin);
    // freopen("test.out","w",stdout);
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cin >> t;
    // while (t--)
    // {
    //     // int n;
    //     // cin >> n;
    //     cout << t;
    // }
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    // check if a character is a vowel
    char ch = 'I';
    auto x = find(begin(vowels), end(vowels), tolower(ch))-begin(vowels);
    string s = "gafas";
    reverse(s.begin(), s.end());
    cout << s;
    for (auto &&i : s)
    {
        cout<<i<<" ";
    }
    

    return 0;
}