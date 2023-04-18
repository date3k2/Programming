#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int n;
map <int,bool> m;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n;
int a[n+3],b[n+3];
fo(i,1,n) cin>>a[i];
fo(i,1,n) {
    cin>>b[i];
    m[b[i]]=1;  
} 
bool kt=0;
fo(i,1,n) 
if (m[a[i]]==1) { 
    cout<<a[i]<<" ";
    kt=1;
}
if (kt==0) cout<<-1;
return 0;
}