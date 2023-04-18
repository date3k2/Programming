#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
int a, b;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b;
    string A = to_string(a), B = to_string(b);
    string Amin, Bmin, Amax, Bmax;
    fo(i, 0, A.length() - 1)
    {
        if (A[i] == '5')
            Amax += '6';
        else
            Amax += A[i];
        if (A[i] == '6')
            Amin += '5';
        else
            Amin += A[i];
    }
    fo(i, 0, B.length() - 1)
    {
        if (B[i] == '5')
            Bmax += '6';
        else
            Bmax += B[i];
        if (B[i] == '6')
            Bmin += '5';
        else
            Bmin += B[i];
    }
    cout << stoi(Amin) + stoi(Bmin) << " " << stoi(Amax) + stoi(Bmax);
    return 0;
}