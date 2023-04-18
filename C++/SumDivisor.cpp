#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
using namespace std;
int a, b;
int m[1000001]={0};
int main()
{
    cin>>a>>b;
    fo(i,1,b) 
    for(int j=2*i;j<=b;j+=i)
    m[j]+=i;
    int dem=0;
    fo(i,a,b)
    if (m[i]>i) ++dem;
    cout<<dem;
    return 0;
}