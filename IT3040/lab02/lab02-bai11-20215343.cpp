// Họ và tên: Nguyễn Duy Đạt
// MSSV: 20215343
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef complex<double> base;
typedef vector<base> vb;

#define PI acos(-1)
const int NBIT = 18;
const int N = 1 << 18;
base W[N];

int revBit(int nbit, int mask) // đảo bit của mask
{
    int i, j;
    for (i = 0, j = nbit - 1; i <= j; ++i, --j)
    {
        if ((mask >> i & 1) != (mask >> j & 1))
        {
            mask ^= 1 << i;
            mask ^= 1 << j;
        }
    }
    return mask;
}
// Hàm biến đổi Fourier nhanh
void fft(int n, vb &a, bool invert) // n là số điểm, a là dãy điểm, invert = 0 là tính FFT, invert = 1 là tính FFT ngược
{
    if (n == 1)
        return;
    int i, j;
    for (i = 0; i < n; ++i)
    {
        j = revBit(NBIT, i);
        if (i < j)
            swap(a[i], a[j]);
    }
    vb anext(n);

    for (int step = 1; step < n; step <<= 1)
    {
        double ang = PI / step;
        if (invert)
            ang = -ang;

        base w(1), wn(cos(ang), sin(ang));

        for (i = 0; i < step; ++i)
        {
            W[i] = w;
            w *= wn;
        }

        int start_even = 0;
        int start_odd = start_even + step;
        while (start_even < n)
        {
            for (i = 0; i < step; ++i)
            {
                anext[start_even + i] = a[start_even + i] + W[i] * a[start_odd + i];
                anext[start_even + i + step] = a[start_even + i] - W[i] * a[start_odd + i];
            }
            start_even += 2 * step;
            start_odd = start_even + step;
        }
        for (i = 0; i < n; ++i)
            a[i] = anext[i];
    }
    if (invert)
    {
        for (i = 0; i < n; ++i)
            a[i] /= n;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    vector<base> a(N), b(N);
    // Nhập đa thức a
    cin >> n;
    int x;
    for (int i = n; i >= 0; --i)
    {
        cin >> x;
        a[i] = (base(x, 0));
    }
    // Nhập đa thức b
    cin >> m;
    for (int i = m; i >= 0; --i)
    {
        cin >> x;
        b[i] = (base(x, 0));
    }
    // Đảo ngược đa thức a và b
    fft(N, a, 0);
    fft(N, b, 0);
    vector<base> ans(N);
    for (int i = 0; i < N; ++i)
        ans[i] = a[i] * b[i];
    // Đảo ngược đa thức ans để tính kết quả
    fft(N, ans, 1);
    int res = 0;
    for (int i = 0; i < n + m + 1; ++i)
        res ^= int(real(ans[i]) + 0.5);
    cout << res << endl;

    return 0;
}
