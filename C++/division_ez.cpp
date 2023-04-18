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
    if (n>=1900) cout<<"Division 1\n";
    if (n>=1600 && n<=1899) cout<<"Division 2\n";
    if (n>=1400 && n<=1599) cout<<"Division 3\n";
    if (n<=1399) cout<<"Division 4\n";
}
return 0;
}