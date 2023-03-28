#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    short a, b;
    cin >> a >> b;
    short p[a][b];
    fo(i, 0, a - 1)
            fo(j, 0, b - 1) cin >>
        p[i][j];

    int row[a][b], col[a][b];

    fo(i, 0, a - 1) row[i][0] = p[i][0];
    fo(i, 0, b - 1) col[0][i] = p[0][i];
    fo(i, 0, a - 1)
        fo(j, 1, b - 1) row[i][j] = row[i][j - 1] + p[i][j];
    fo(j, 0, b - 1)
        fo(i, 1, a - 1) col[i][j] = col[i - 1][j] + p[i][j];
    int maxFinal = -9999999;
    fo(i, 0, a - 2)
        fo(j, 0, b - 2)
            fo(k, i + 1, a - 1)
                fo(l, j + 1, b - 1)
                    maxFinal = max(maxFinal, row[i][l - 1] - row[i][j] + row[k][l - 1] - row[k][j] + col[k][j] -
                                                 (i > 0 ? col[i - 1][j] + col[i - 1][l] : 0) + col[k][l]);
    cout << maxFinal;
    return 0;
}