#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
using namespace std;
int n,w[45],v[45],m,l[45][11000007];
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>n>>m;
fo(i,1,n)
cin>>w[i]>>v[i];
fo(i,1,n)
  fo(j,1,m)
  {
   l[i][j]=l[i-1][j];
   if (w[i]<=j) l[i][j]=max(l[i][j],l[i-1][j-w[i]]+v[i]);
  }
cout<<l[n][m];
}
