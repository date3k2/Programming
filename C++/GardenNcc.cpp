#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
using namespace std;
int main()
{
  freopen("test.inp", "r", stdin);
  freopen("test.out", "w", stdout);
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
  int colIter = 0, maxRs = -99999999;
  fo(j, 1, b - 1)
  {
    vector<int> maxRow;
    fo(i, 0, a - 1) maxRow.push_back(row[i][j]);
    sort(maxRow.begin(), maxRow.end());
    int maxR = maxRow[a - 1] + maxRow[a - 2];
    if (maxRs < maxR)
    {
      maxRs = maxR;
      colIter = j;
    }
    else if (maxRs == maxR && col[a - 1][j] > col[a - 1][colIter])
    {
      maxRs = maxR;
      colIter = j;
    }
  }
  int rowIter = 0, maxCls = -99999999;
  fo(i, 1, a - 1)
  {
    vector<int> maxCol;
    fo(j, 0, b - 1) maxCol.push_back(col[i][j]);
    sort(maxCol.begin(), maxCol.end());
    int maxC = maxCol[b - 1] + maxCol[b - 2];
    if (maxCls < maxC)
    {
      maxCls = maxC;
      rowIter = i;
    }
    else if (maxCls == maxC && row[i][b - 1] > row[rowIter][b - 1])
    {
      maxCls = maxC;
      rowIter = i;
    }
  }
  int maxFinal = -9999999;
  fo(i, 0, rowIter - 1)
      fo(j, 0, colIter - 1)
          maxFinal = max(maxFinal, row[i][colIter - 1] - row[i][j] + row[rowIter][colIter - 1] - row[rowIter][j] + col[rowIter][j] -
                                       (i > 0 ? col[i - 1][j] + col[i - 1][colIter] : 0) + col[rowIter][colIter]);
  cout << maxFinal;
  return 0;
}