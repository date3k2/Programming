#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int t;
struct bruh {
    int x,y;
};
bool cmp(bruh &a,bruh &b)
{
    return a.x<b.x;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>t;
while (t--)
{
    int n;
    cin>>n;
    bruh a[n+3];
    int s=0,d=0;
    fo(i,1,n)
    {
        int u,v;
        cin>>u>>v;
        if (u==0 && v==0) continue;
            ++d;
            a[d].x=u;
            a[d].y=v;
    }
    n=d;
    int xmax=a[1].x,xmin=a[1].x,ymax=a[1].y,ymin=a[1].y;
    fo(i,1,n) 
    {
        if (a[i].x>xmax) xmax=a[i].x;
        if (a[i].x<xmin) xmin=a[i].x;
        if (a[i].y>ymax) ymax=a[i].y;
        if (a[i].y<ymin) ymin=a[i].y;
    }
    s=abs(xmax)+xmax-xmin+abs(ymax)+abs(xmin)+ymax-ymin+abs(ymin);
    if (n==0) s=0;
    cout<<s<<"\n";
}
return 0;
}