#include <bits/stdc++.h>
#define fo(i, l, h) for (short i = l; i <= h; ++i)
#define ll long long
using namespace std;

short visited[5760];
vector<short> adj[5760];
vector<short> adjR[5760];
int scc = 0;
bool check(string a, string b)
{
    fo(i, 1, 4) if (b.find(a[i]) < 10) b.erase(b.find(a[i]), 1);
    return (b.length() == 1);
}
vector<short> fl;
vector<short> sameSCC;
void dfs(short u)
{
    visited[u] = true;
    for (auto v : adj[u])
        if (!visited[v])
            dfs(v);
    fl.push_back(u);
}

void countingSCC(short u)
{
    visited[u] = 0;
    sameSCC.push_back(u);
    for (auto v : adjR[u])
        if (visited[v])
            countingSCC(v);
}
int main()
{
    string uc;
    cin >> uc;
    string u, v;
    cin >> u >> v;
    freopen("sgb-words.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string words[5760];
    short n = 1, count = 0, iuc, iv, iu;
    while (cin >> words[n])
    {
        if (words[n] == uc)
            iuc = n;
        if (words[n] == u)
            iu = n;
        if (words[n] == v)
            iv = n;
        ++n;
    }
    --n;
    fo(i, 1, n - 1)
        fo(j, i + 1, n)
    {
        if (check(words[i], words[j]))
        {

            adj[i].push_back(j);
            adjR[j].push_back(i);
        }
        if (check(words[j], words[i]))
        {

            adj[j].push_back(i);
            adjR[i].push_back(j);
        }
    }
    fo(i, 1, n) if (!visited[i]) dfs(i);
    reverse(fl.begin(), fl.end());
    bool kt = false;
    for (auto i : fl)
    {
        if (visited[i])
        {
            countingSCC(i);
            ++scc;
        }
        if (visited[iuc] == 0 && kt == 0)
        {
            cout << words[iuc] << ": ";
            for (auto k : sameSCC)
                if (k != iuc)
                    cout << words[k] << " ";
            cout << "\n";
            kt = true;
        }
        else if (visited[iuc] == 1)
            sameSCC.clear();
    }
    cout << "Co " << scc << " thanh phan lien thong manh\n";

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
    if (prev[iv] == 0)
        cout << "Khong co duong di giua hai dinh";
    else
    {
        string s = "";
        while (iv != iu)
        {
            s = words[iv] + " " + s;
            iv = prev[iv];
        }
        cout << words[iu] + " " + s;
    }
    return 0;
}