#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
using namespace std;
int deg[30005];
bool c[30005][30005];
struct myclass
{
    bool operator()(int i, int j) { return (deg[i] > deg[j]); }
} cmp;
// sinh mau ngau nhien
string hex_color_code()
{
    string color = "\"#";
    char hex_char[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    fo(i, 0, 7)
        color += hex_char[rand() % 16];
    return color + "\"";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("dothi.txt", "r", stdin);
    freopen("dothitomau.dot", "w", stdout);
    srand(time(0));
    cout << "graph dothi \n"
         << "{ \n";
    // Input
    int n, m;
    cin >> n >> m;
    fo(i, 1, m)
    {
        int u, v;
        cin >> u >> v;
        ++deg[u];
        ++deg[v];
        cout << u << " -- " << v << "\n";
        c[u][v] = true;
        c[v][u] = true;
    }
    int a[n + 1];
    int color[n + 1];
    fill(color + 1, color + 1 + n, 0);
    fo(i, 1, n) a[i] = i;
    // sap xep dinh
    sort(a + 1, a + 1 + n, cmp);
    // to mau
    fo(i, 2, n)
    {
        map<int, bool> m;
        fo(j, 1, i - 1) if (c[a[i]][a[j]])
            m[color[a[j]]] = 1;
        int validColor = 0;
        while (m[validColor])
            ++validColor;
        color[a[i]] = validColor;
    }
    // in cac dinh co chung mau tren 1 dong
    vector<int> sameColor[n + 1];
    fo(i, 1, n)
        sameColor[color[a[i]]]
            .push_back(a[i]);
    int i = 0;
    while (!sameColor[i].empty())
    {
        if (sameColor[i].size() >= 2)
            fo(j, 0, sameColor[i].size() - 2) cout << sameColor[i][j] << ", ";
        cout << sameColor[i][sameColor[i].size() - 1] << " ";
        cout << "[fillcolor=" << hex_color_code() << ", style=filled] \n";
        ++i;
    }
    cout << "}";
    return 0;
}