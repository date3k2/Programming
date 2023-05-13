#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 31; i >= 0; --i)
        if (n & (1 << i))
            cout << 1;
        else
            cout << 0;
    return 0;
}