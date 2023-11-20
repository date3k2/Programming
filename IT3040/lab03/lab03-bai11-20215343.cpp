#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; ++i)
/*
Nguyen Duy Dat 20215343
*/
int dist[100][100]; // distance matrix, 0 denoted unreachable
bool visited[1000];
int min_dis = INT_MAX;
bool allVisited(vector<int> &cities)
{
    for (auto x : cities)
    {
        if (!visited[x])
            return false;
    }
    return true;
}
// Min distance travel from src to dest and containing only given cities
void Try(int src, int dest, vector<int> &cities, int cur_dis)
{
    if (src == dest && allVisited(cities))
    {
        min_dis = min(min_dis, cur_dis);
        // cout << min_dis << '\n';
        return;
    }
    for (auto x : cities)
    {
        if (!visited[x] && dist[src][x] != 0)
        {
            visited[x] = true;
            cur_dis += dist[src][x];
            Try(x, dest, cities, cur_dis);
            visited[x] = false;
            cur_dis -= dist[src][x];
        }
    }
}
int main()
{
    /*
    Nguyen Duy Dat 20215343
    */
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // Read and write in file
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    int n; // number of cities
    int r; // number of people want to travel

    cin >> n >> r;
    rep(i, 0, n)
            rep(j, 0, n)
                cin >>
        dist[i][j];
    vector<vector<int>> cities;
    cities.resize(r);
    string cts;
    int idx = 0;
    while (getline(cin, cts))
    {
        if (cts == "")
            continue;
        stringstream ss(cts);
        int x;
        while (ss >> x)
        {
            cities[idx].push_back(x - 1);
        }
        idx++;
    }
    rep(i, 0, r)
    {
        min_dis = INT_MAX;
        int cur_dis = 0;
        fill(visited, visited + n, false);
        visited[cities[i][0]] = true;
        Try(cities[i][0], cities[i][cities[i].size() - 1], cities[i], cur_dis);
        cout << (min_dis == INT_MAX ? 0 : min_dis) << '\n';
    }
    return 0;
}