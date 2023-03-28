#include <bits/stdc++.h>
using namespace std;
#define fo(i,l,h) for(int i=l;i<=h;++i)
int t,a[5010];
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cin >> t;
fo(i,1,t)
{
    int a1,a2,a3;
    cin >> a1 >> a2 >> a3;
    int m= abs(a1+a3-a2*2) % 3;
    if (m==2) m=1;
    a[i]=m;
}
fo(i,1,t) cout<<a[i]<<endl;
return 0;
}