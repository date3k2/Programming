#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
using namespace std;
int n,dem=0;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>n;
if (n<5) cout<<0;
else
    fo(i,3,trunc(sqrt(2*n+1)))
if (i*i % 2==1) dem++;//cout<<(i*i-1)/2<<" "<<(i*i-1)/2+1<<endl;
cout<<dem;
//cout<<trunc(sqrt(n));
return 0;
}
