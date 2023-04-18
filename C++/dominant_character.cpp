#include <bits/stdc++.h>
using namespace std;
#define fo(i,l,h) for(int i=l;i<=h;++i)
int t;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>t;
fo(i,1,t)
{
    int n;
    cin>>n;
    string st;
    cin>>st;
    if ( ((int)st.find("a")==-1) || ((int)st.find("a")==(int)st.rfind("a")) ) cout<<"-1"<<"\n";
     else
      {
        bool kt=0;
        if ((int)st.find("aa")!=-1) {cout<<2<<"\n";kt=1; continue;};
        if ((int)st.find("aba")!=-1) {cout<<3<<"\n";kt=1; continue;};
        if ((int)st.find("aca")!=-1) {cout<<3<<"\n";kt=1; continue;};
        if ((int)st.find("abca")!=-1) {cout<<4<<"\n";kt=1; continue;};
        if ((int)st.find("acba")!=-1) {cout<<4<<"\n";kt=1; continue;};
        if ((int)st.find("abbacca")!=-1) {cout<<7<<"\n";kt=1; continue;};
        if ((int)st.find("accabba")!=-1) {cout<<7<<"\n";kt=1; continue;};
        if (kt==0) cout<<-1<<"\n";
        }
}
return 0;
}