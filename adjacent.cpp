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
    string st,s;
    bool kt=1;
    cin>>st;
    cin>>s;
    if (st.find(s)>10000) cout<<"NO"<<"\n";
    else {
        while(st.find(s)%2==1 && kt==1)
        {
            st[st.find(s)]='0';
            if (st.find(s)>10000) {cout<<"NO"<<"\n";kt=0;}
        }
        if (st.find(s)%2==0 && kt==1) cout<<"YES"<<"\n";
    }
}
return 0;
}