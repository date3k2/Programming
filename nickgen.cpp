#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
int t;
int main()
{
    srand(time(0));
    freopen("test.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fo(i,1,30)
    {
        string s="";
        fo(j,1,5)
        s+=(char)(rand()%26+97);
        cout<<s<<" ";
        s+=char('0'+rand()%10);
        s[0]=(char) (s[0]-32);
        cout<<s<<" ";
        cout<<3;
        fo(j,1,8) cout<<rand()%10;
        cout<<"\n";
    }
    return 0;
}