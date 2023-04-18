#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
string s;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>s;
map <string, int> m;
for(int i=0;i<=s.length()-1;++i) 
{
    cout<<s[i]-48<<" ";
}
return 0;
}