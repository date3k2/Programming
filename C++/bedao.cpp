#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long ans = 0, max_product = 0, n, k;
    cin >> n >> k;
    long long a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        ans += a[i] * b[i];
    }
    for (int i = 0; i < n; i++)
    {
        long long k1 = ((b[i] + k - a[i]) / 2 > 0 ? (b[i] + k - a[i]) / 2 : (a[i] + k - b[i]) / 2);
        long long k2 = k - k1;
        if (k1 < 0 || k2 < 0)
        {
            max_product = max(max_product, a[i] * k);
            max_product = max(max_product, b[i] * k);
        }
        else
        {
            max_product = max(max_product, a[i] * k1 + b[i] * k2 + k1 * k2);
            max_product = max(max_product, a[i] * k2 + b[i] * k1 + k1 * k2);
        }
    }
    cout << max_product + ans;
    return 0;
}