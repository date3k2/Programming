#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    map<char, int> angle = {{'N', 0}, {'S', 2}, {'E', 1}, {'W', 3}};
    string s;
    cin >> s;
    vector<int> count(4);
    for (char c : s)
    {
        count[angle[c]]++;
    }
    int ans = 0;
    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int pos;
            char c;
            cin >> pos >> c;
            pos--;
            count[angle[s[pos]]]--;
            s[pos] = c;
            count[angle[c]]++;
        }
        else
        {
            int left, right, k;
            cin >> left >> right >> k;
            left--;
            for (int i = left; i < right; i++)
            {
                count[angle[s[i]]]--;
                s[i] = "NESW"[(angle[s[i]] + k) % 4];
                count[angle[s[i]]]++;
            }
        }
        if (count[0] == count[2] && count[1] == count[3])
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
