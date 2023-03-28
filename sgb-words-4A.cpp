#include <bits/stdc++.h>
#define fo(i, l, h) for (short i = l; i <= h; ++i)
#define ll long long
using namespace std;

short visited[5760];
vector<short> adj[5760];

bool check(string a, string b)
{
    short c = 0;
    fo(i, 0, a.length() - 1) if (a[i] != b[i])++ c;
    return (c == 1);
}

void dfs(short u, short count)
{
    visited[u] = count;
    for (auto v : adj[u])
        if (!visited[v])
            dfs(v, count);
}
int main()
{
    string u, v;
    cin >> u >> v;
    freopen("sgb-words.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string words[5760];
    short n = 1, count = 0, iu, iv;
    while (cin >> words[n])
    {
        if (words[n] == u)
            iu = n;
        if (words[n] == v)
            iv = n;
        ++n;
    }
    --n;
    fo(i, 1, n - 1)
        fo(j, i + 1, n) if (check(words[i], words[j]))
    {
        adj[i].push_back(j);
        adj[j].push_back(i);
    }
    fo(i, 1, n) if (!visited[i])
    {
        ++count;
        dfs(i, count);
    }
    cout << "So thanh phan lien thong : " << count << "\n";
    if (visited[iu] == visited[iv])
    {
        queue<short> q;
        bool vs[5760];
        short prev[5760];
        q.push(iu);
        while (!q.empty())
        {
            auto k = q.front();
            q.pop();
            for (auto u : adj[k])
            {
                if (vs[u])
                    continue;
                vs[u] = true;
                prev[u] = k;
                q.push(u);
            }
        }
        string s = "";
        while (iv != iu)
        {
            s = words[iv] + " " + s;
            iv = prev[iv];
        }
        cout << words[iu] + " " + s;
    }
    else
        cout << "Khong co duong di giua hai dinh";
    return 0;
}