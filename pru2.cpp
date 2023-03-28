#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, i;

    cin >> n; 
    int n2 = n + 2;
    int prufer[2][n], deg[n2] = {0};

    for (i = 0; i < n; i++)
    {
        cin >> prufer[0][i];
        cin >> prufer[1][i]; 
        deg[prufer[0][i]]++; 
        deg[prufer[1][i]]++;
    }

    for (i = 0; i < n - 1; i++)
    {
        int MIN = 100000;
        for (int j = 0; j < n; j++)
        {
            if (deg[prufer[0][j]] == 1 && prufer[0][j] != 0)
            { 
                if (MIN > prufer[0][j])
                { 
                    MIN = prufer[0][j];
                    x = j;
                }
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (deg[prufer[1][j]] == 1 && prufer[1][j] != 0)
            {
                if (MIN > prufer[1][j])
                {
                    MIN = prufer[1][j];
                    x = j;
                }
            }
        }
        deg[prufer[0][x]]--;
        deg[prufer[1][x]]--;
        if (deg[prufer[0][x]] == 0)
            cout << prufer[1][x] << " ";
        else
            cout << prufer[0][x] << " ";
    }
    return 0;
}