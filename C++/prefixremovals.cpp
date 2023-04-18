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
    string st,s,s1;
    cin>>st;
    map<char,int> m;
    fo(i,0,st.length()-1)
      ++m[st[i]];
    fo(i,0,st.length()-1)
      if (--m[st[i]]==0) 
        {
            cout<<st.substr(i)<<"\n";
            break;
        }
}
return 0;
}