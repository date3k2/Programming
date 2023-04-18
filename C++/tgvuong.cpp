#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
using namespace std;
int n;
int d=1;
int main()
{
cin>>n;
fo(i,1,n)
{
    fo(j,d,d+i-1) cout<<j;
    cout<<"\n";
    d=d+i;
}
return 0;
}