#include <iostream>
using namespace std;
/*
    Nguyễn Duy Đạt - 20215343
*/
int n, M, m[100], v[100];
int x[100], best, sumV, sumM, All[100];

void init()
{
    for (int i = n; i >= 1; --i)
    {
        All[i] = All[i + 1] + v[i];
    }
}

void print()
{
    cout << best;
}

void process(int i)
{
    if (sumV + All[i] <= best || sumM > M)
        return; // sua return
    if (i > n)
    {
        best = sumV;
        return; // sua thanh return
    }
    process(i + 1);
    sumM += m[i];
    sumV += v[i];
    process(i + 1);
    sumM -= m[i];
    sumV -= v[i];
}

int main()
{
    cin >> n >> M;
    for (int i = 1; i <= n; ++i)
        cin >> m[i] >> v[i];
    init();
    process(1);
    print();
    return 0;
}