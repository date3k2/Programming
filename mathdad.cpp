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
while(t--)
{
    int n,k2=0;
    cin>>n;
    if (n%3==0)
    {
        fo(i,1,n/3) cout<<"21";
        cout<<"\n";
    }
    if (n%3==1)
    {
        fo(i,1,n/3) cout<<"12";
        cout<<1<<"\n";
    }
    if (n%3==2)
    {
        fo(i,1,n/3) cout<<"21";
        cout<<2<<"\n";
    }
}
return 0;
}