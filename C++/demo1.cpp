#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define IOS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define mod 1000000007
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
inline ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}
inline ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }
int main()
{
    IOS;
    int n;
    cin >> n;
    auto a = new int[10];
    cout << a;
    delete[] a;
    return 0;
}