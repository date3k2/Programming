#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int t;
int m[1000005];
int main()
{
    freopen("test.out", "w", stdout);
ios_base::sync_with_stdio(false);
cin.tie(NULL);
unsigned int k=1;
fo(i,1,1000)
{
    k *=((std::hash<std::string>()(to_string(i)))%101);
}
    cout<<k<<" ";
return 0;
}