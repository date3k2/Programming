#include <bits/stdc++.h>
#define loop(i, l, h) for (int i = l; i <= h; ++i)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    int initial_pow = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        initial_pow += abs(a[i]);
    }
    sort(a.begin(), a.end());
    vector<int> power(n);
    power[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        power[i] = power[i - 1] + a[i];
    }
    cout << initial_pow <<"\n";
    int dame = 0;
    loop(i, 1, q)
    {
        char _type;
        int x;
        cin >> _type >> x;
        int d = 2 * (_type == 'D') - 1;
        dame += x * d;
        int pos = upper_bound(a.begin(), a.end(), dame) - a.begin();
        if (pos > 0)
        {
            cout << pos * dame - power[pos - 1] +
                        (power[n - 1] - power[pos - 1] - (n - pos) * dame)
                 << endl;
        }
        else
        {
            cout << power[n - 1] - n * dame << endl;
        }
    }
    return 0;
}