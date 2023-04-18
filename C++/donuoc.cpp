#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
vector<tuple<short, short, short>> v;
vector<bool> visited;
vector<int> adj[100];
void dfs(int u) {
visited[u]=true;
for (auto ad : adj[u])
{
    if (!visited[ad]) {
        cout << "\"(" << get<0>(v[u]) << "," << get<1>(v[u]) << "," << get<2>(v[u]) << ")\"--";
        cout << "\"(" << get<0>(v[ad]) << "," << get<1>(v[ad]) << "," << get<2>(v[ad]) << ")\" \n";
    dfs(ad);
    }
}

}
int main()
{
    freopen("donuoc.dot", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fo(y, 0, 7)
        fo(z, 0, 4) if (y + z > 0) v.emplace_back(make_tuple(11 - y - z, y, z));
    int numV = v.size();
    fo(i,0,numV) visited.push_back(false);
    fo(i, 0, numV - 1)
        fo(j, 0, numV - 1)
    {
        if (get<0>(v[i]) == get<0>(v[j]) && i != j)
        {
            int pouring = get<1>(v[i]) + get<2>(v[i]);
            bool check = false;
            switch (pouring)
            {
            case 1 ... 4:
                if (pouring == get<1>(v[j]) || pouring == get<2>(v[j]))
                    check = true;
                break;
            case 5 ... 7:
                if (pouring == get<1>(v[j]) || get<2>(v[j]) == 4)
                    check = true;
                break;
            default:
                if (get<1>(v[j]) == 7 || get<2>(v[j]) == 4)
                    check = true;
                break;
            }
            if (check)
                adj[i].push_back(j);
        }

        if (get<1>(v[i]) == get<1>(v[j]) && i != j)
        {
            int pouring = get<0>(v[i]) + get<2>(v[i]);
            bool check = false;
            switch (pouring)
            {
            case 4 ... 10:
                if (pouring == get<0>(v[j]) || get<2>(v[j]) == 4)
                    check = true;
                break;
            case 11:
                if (get<0>(v[j]) == 10 || get<2>(v[j]) == 4)
                    check = true;
                break;
            }
            if (check)
                adj[i].push_back(j);
        }

        if (get<2>(v[i]) == get<2>(v[j]) && i != j)
        {
            int pouring = get<0>(v[i]) + get<1>(v[i]);
            bool check = false;
            switch (pouring)
            {
            case 7 ... 10:
                if (pouring == get<0>(v[j]) || get<1>(v[j]) == 7)
                    check = true;
                break;
            case 11:
                if (get<0>(v[j]) == 10 || get<1>(v[j]) == 7)
                    check = true;
                break;
            }
            if (check)
                adj[i].push_back(j);
        }
    }
    cout<<"graph do_nuoc {\n";
    dfs(numV-1);
    cout<<"}";
    // => Vay co the tim duoc cach do nuoc thoa man yeu cau de bai
    return 0;
}