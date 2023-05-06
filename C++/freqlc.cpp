#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> topKFrequent(vector<string> &words, int k)
    {
        unordered_map<string, int> m;
        for (auto i : words)
            m[i]++;
        vector<string> ans;
        priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> pq;
        for (auto i : m)
        {
            pq.push({-i.second, i.first});
        }
        while (k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    auto x = Solution();
    vector<string> words = {"i", "love", "leetcode", "i", "love", "coding"};
    int k = 2;
    auto y = x.topKFrequent(words, k);
    for (auto i : y)
    {
        cout << i << " ";
    }
}

// Counter in C++ like Python
