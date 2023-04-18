#include <bits/stdc++.h>
using namespace std;
int a,b,c,k;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>a>>b>>c>>k;
if (k>=2) cout<<max(max(abs(a),abs(b)),abs(c))*3;
if (k==0) cout<<a+b+c;
if (k==1)
{
        int s= max(max((a-b+c),(-a+b+c)),(a+b-c));
        cout<<max(s,max(max(a,b),c)*3);

}
}
