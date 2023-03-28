#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int m,n,p;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>m>>n>>p;
int a[m][n], b[n][p],c[m][p];
fo(i,1,m) 
 fo(j,1,n) cin>>a[i][j];
fo(i,1,n)
 fo(j,1,p) cin>>b[i][j];
fo(i,1,m)
 fo(j,1,p) c[i][j]=0;
fo(i,1,m) 
  fo(k,1,p)
    fo(j,1,n)
    c[i][k]=c[i][k]+a[i][j]*b[j][k];
fo(i,1,m) {
    fo(j,1,p) cout<<c[i][j]<<" ";
    cout<<"\n";
}
return 0;
}