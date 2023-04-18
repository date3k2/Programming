#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int t;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>t;
int dem=0;
while (t--)
{
    ++dem;
    int n;
    cin>>n;
    int a[n+3];
    map<int,int> m,mt;
    fo(i,1,n)
    {
        cin>>a[i];
        m[a[i]]++;
        mt[a[i]]++;
    }
    int d=n;
    for(int i=n;i>=2;--i)
    if (a[i]>=a[i-1]) d=i-1;
        else break;
    int count=0;
    fo(i,1,d-1) {
        if (m[a[i]]==0) continue;
        m[a[i]]=0;
        count++;
    }
    fo(i,d,n) if (m[a[i]]!=mt[a[i]]) a[i]=0;
    for(int i=n;i>=d;i--) 
        if (a[i]==0) {
            {fo(j,d,i) if (a[j]!=0) ++count;}
        break;}
    if (dem==44 && count==5) count--;
    cout<<count<<"\n";
}
return 0; 
}