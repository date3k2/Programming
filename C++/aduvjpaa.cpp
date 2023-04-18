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
fo(i,0,s.length()-1)
if (s[i]!=s[s.length()-i-1]) 
{
    cout<<"NO";
    exit(0);
}
cout<<"YES";
return 0;
}