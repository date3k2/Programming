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
    int n,i=0,c=0;
    bool kt=0;
    string st;
    cin>>n;
    cin>>st;
       while (st.length()>1)  {
        if (st[0]=='(') {
            st.erase(0,2);
            ++c;
    }
    else 
    {
        ++i;
        while (st[i]=='(') ++i;
        if (i==st.length()) {
            cout<<c<<" "<<st.length()<<"\n";
            kt=1;
            break;
        }
        st.erase(0,i+1);
        i=0;
        ++c;

    }
                }
    if (kt==0) cout<<c<<" "<<st.length()<<"\n";
}
return 0;
}