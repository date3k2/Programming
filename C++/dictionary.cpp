#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int count = 0;
    map<string, int> m;
    map<string, vector<pair<int, int>>> pos;
    auto start = high_resolution_clock::now();
    while (cin >> s)
    {
        ++count;
        string x = "";
        fo(i, 0, s.length() - 1)
        {
            if (isalpha(s[i]) || (int)s[i] < 0 || (s[i] == '-' && i > 0 && isalpha(s[i - 1])))
                x += s[i];
        }
        x[0] = tolower(x[0]);
        // cout<<x<<"\n";
        ++m[x];
        pos[x].emplace_back((count - 1) / 15 + 1, (count - 1) / 375 + 1);
    }
    cout << "Từ            Số lần xuất hiện              Dòng,trang\n\n";
    for (auto i : m)
    {
        string whitespace(20 - i.first.length(), ' ');
        cout << i.first << whitespace << i.second << "                          ";
        for (auto p : pos[i.first])
            cout << '(' << p.first << "," << p.second << ")  ";
        cout << "\n";
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "-------------------------------\n";
    cout << "Time taken: "
         << duration.count() << " miliseconds\n";
    return 0;
}