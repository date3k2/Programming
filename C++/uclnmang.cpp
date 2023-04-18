#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
short t;
int ucln(int a, int b)
{
int du;
    while (b!=0) 
    {
        du=a%b;
        a=b;
        b=du;
    }
return a;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>t;
fo(k,1,t)
{
    int n;
    cin>>n;
    int a[n];
    fill(a+1,a+n,0);
    fo(i,1,n) cin>>a[i];
    fo(i,1,n-1) a[i+1]=ucln(a[i],a[i+1]);
    cout<<a[n]<<"\n";
}
return 0;
}