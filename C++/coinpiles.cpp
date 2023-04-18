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
fo(i,1,t)
{
    int a,b;
    cin>>a>>b;
    if ((2*a>=b) && (2*b>=a) && ((2*a-b) %3==0) && ((2*b-a) %3==0)) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}
return 0;
}