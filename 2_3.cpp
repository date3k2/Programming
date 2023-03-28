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
while (t--)
{
    int n;
    cin>>n;
    int a=min(n/3+(n%3==1?1:(n%3==0?0:1)),n/2);  
    if (n==1) a=2;
    cout<<a<<"\n";
}
return 0;
}