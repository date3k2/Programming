#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define MOD 1000000007
#define us unsigned long long
#define matrix vector<vector<us>>
using namespace std;
us n;
int u;
matrix a={{0,1},{1,1}};
matrix mul(matrix a, matrix b)
{
matrix c={{0,0},{0,0}};
fo(i,0,1) fo(j,0,1) fo(k,0,1)
c[i][j]=(c[i][j]+a[i][k]*b[k][j]) % MOD;
return c;
}
matrix fp(matrix a,long long x)
{
if (x==1) return a;
matrix t=fp(a,x/2);
if (x%2==1) return mul(mul(t,t),a);
else return mul(t,t);
}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>n;
matrix k=fp(a,n);
cout<<k[1][1];
}
