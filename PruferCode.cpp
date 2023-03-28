#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
using namespace std;
int deg[100003];
struct myclass
{
    bool operator()(int i, int j) { return (deg[i] < deg[j]); }
} cmp;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Input
    int n;
    cin >> n;
    vector<int> vt[n + 3];
    fo(i, 1, n)
    {
        int u, v;
        cin >> u >> v;
        vt[u].push_back(v);
        vt[v].push_back(u);
    }
    vector<int> nonLeaf;
    int parent[n + 1];
    fill(parent, parent + n + 1, -1);
    int degree[n + 1];
    // Tim bac, tim cac dinh khong phai la, tim cha cua cac la
    fo(i, 1, n)
    {
        deg[i] = vt[i].size();
        degree[i] = deg[i];
        if (deg[i] > 1)
            nonLeaf.push_back(i);
        else
            parent[i] = vt[i].front();
    }
    // Tim cha cua cac dinh khong phai la
    for (auto u : nonLeaf)
        for (auto neibor : vt[u])
            if (deg[neibor] == 1)
                --deg[u];
    sort(nonLeaf.begin(), nonLeaf.end(), cmp);
    for (auto u : nonLeaf)
        for (auto neibor : vt[u])
            if (parent[neibor] == -1 || parent[neibor] != u)
                parent[u] = neibor;
    // In prufer code
    int pt = 0;
    fo(i, 1, n) if (degree[i] == 1)
    {
        pt = i;
        break;
    }
    int leaf = pt;
    for (int i = 0; i < n - 1; i++)
    {
        int code = parent[leaf];
        cout << code << " ";
        if (--degree[code] == 1 && code < pt && code != 0)
            leaf = code;
        else
        {
            pt++;
            while (degree[pt] != 1)
                pt++;
            leaf = pt;
        }
    }
    return 0;
}