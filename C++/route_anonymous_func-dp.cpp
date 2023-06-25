#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countRoutes(vector<int> &locations, int start, int finish, int fuel)
    {
        int n = locations.size();
        int mod = pow(10, 9) + 7;
        unordered_map<int, int> memo;
        function<int(int, int)> dfs = [&](int i, int fuel)
        {
            if (memo.count(i * 201 + fuel))
            {
                return memo[i * 201 + fuel];
            }
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    int x = fuel - abs(locations[i] - locations[j]);
                    if (x >= 0)
                    {
                        count = (count + dfs(j, x)) % mod;
                        if (j == finish)
                        {
                            count = (count + 1) % mod;
                        }
                    }
                }
            }
            memo[i * 201 + fuel] = count;
            return count;
        };
        if (start == finish)
        {
            return (dfs(start, fuel) + 1) % mod;
        }
        return dfs(start, fuel);
    }
};