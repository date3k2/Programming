#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int mins(vector<int> &a, unordered_map<int, int> &d)
    {
        function<int(int, int)> solve = [&](int begin, int prev)
        {
            int mins = INT_MAX;
            if (begin == a.size())
            {
                return 0;
            }
            for (int i = begin; i < a.size(); i++)
            {
                if (a[i] > prev)
                {
                    mins = min(mins, (d[prev] - 1) * a[i] + prev + solve(i + 1, a[i]));
                }
            }
            return mins;
        };
        return solve(0, 0);
    }

    void solve()
    {
        int t;
        cin >> t;
        while (t--)
        {
            int n;
            cin >> n;
            vector<int> a(n);
            unordered_map<int, int> c;
            for (int i = 0; i < n; i++)
            {
                cin >> a[i];
                c[a[i]]++;
            }
            if (c[0] <= 1)
            {
                cout << 0 << endl;
                continue;
            }
            int mex = 0;
            while (c.find(mex) != c.end())
            {
                mex++;
            }
            vector<int> e;
            for (auto &p : c)
            {
                e.push_back(p.first);
            }
            e.push_back(mex);
            c[mex] = 1;
            cout << mins(e, c) << endl;
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    s.solve();
    return 0;
}
