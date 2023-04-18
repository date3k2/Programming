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
    int n,s=0;
     cin>>n;
     if (n<10) cout<<n<<"\n";
     else {
        int i=9,k=0;
    while (n>i)
    {    
        n=n-i;
        s=i*pow(10,k)+s;
        ++k;
        --i;
    }
    s=n*pow(10,k)+s;
    cout<<s<<"\n";
     }
}
return 0;
}