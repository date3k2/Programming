#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int n,d=0;
string st,x="";
map <string, bool> kt;
void xau()
{
cout<<st<<endl;
//cout<<x<<endl;
    fo(i,0,st.length()-1) 
    {
        if (st[i]=='1') continue;
        string k=st;
        k[i]='1';    
        if (k=="1111") ++d;
        if (d>1) break;
        st[i]='1';
        kt[st]=1;
        x+=st+" ";
        xau();
        st[i]='0';
        xau();
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n;
st.insert(0,n,'0');
xau();
return 0;
}