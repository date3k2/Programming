#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
short t;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>t;
short ys=0,yone=0;
fo(j,1,t)
{
    int i,n;
    cin>>i>>n;
    if (i>=n) {cout<<"Yasuo"<<"\n"; ++ys; continue;}
    if (n % (i+1)==0) {++yone; cout<<"Yone"<<"\n";}
    else {++ys; cout<<"Yasuo"<<"\n";}
}
if (yone>ys) cout<<"YONE";
else cout<<"YASUO";
return 0;
}