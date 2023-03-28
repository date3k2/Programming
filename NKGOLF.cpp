#include <bits/stdc++.h>
using namespace std;
#define fo(i,l,h) for(int i=l;i<=h;++i)
int a[1005][1005],m,n;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>m>>n;
fo(i,1,m) fo(j,1,n) cin>>a[i][j];
int kq=1;
fo(i,1,m)
  fo(j,1,n)
  {
      int k1=0,l1=0;
      fo(k,i,m-1) if (a[k][j]>a[k+1][j]|| k) {k1=k;break;}
      fo(l,j,n-1) if (a[i][l]>a[i][j+1]) {l1=l;break;}
      kq=max(kq,(l1-j+1)*(k1-i+1));
      cout<<i<<" "<<j<<" "<<k1<<" "<<l1<<"\n";
  }
cout<<kq;
}
