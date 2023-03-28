#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int n,a[50];
void Print() {
fo(i,1,n) {
    fo(j,1,n)
      if (j==a[i]) cout<<" O ";
      else cout<<" x ";
    cout<<"\n";
}
cout<<"\n\n";
}
bool UCVh(int j, int k) {
    int i;
    fo(i,1,k-1)
        if (j==a[i] || abs(j-a[i])==k-i) return false;
    return true;
}
void Find(int k) {
    fo(j,1,n) {
        if (UCVh(j,k)) {
            a[k]=j;
            if (k==n) Print();
            else Find(k+1);
        }
    }
}
int main()
{
freopen("queen.inp","r",stdin);
freopen("queen.out","w",stdout);
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n;
Find(1);
return 0;
}