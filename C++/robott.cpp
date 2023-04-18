#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int n;
string st;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n;
cin>>st;
int x=0,y=0;
if (st[0]=='G') y=1;
if (st[0]=='L') x=-1;
if (st[0]=='R') x=1;
if (st[0]=='B') y=-1;
fo(i,1,n-1)
{
if (st[i-1]=='G')
{
if (st[i]=='G') ++y;
if (st[i]=='L') --x;
if (st[i]=='R') ++x;
if (st[i]=='B') --y;
}
if (st[i-1]=='B')
{
int kt=0;
if (st[i]=='G') {--y;st[i]='B';kt=1;}
if (kt==0)
if (st[i]=='L') {++x;st[i]='R';kt=1;}
if (kt==0)
if (st[i]=='R') {--x;st[i]='L';kt=1;}
if (kt==0)
if (st[i]=='B') {++y;st[i]='G';kt=1;}
}
if (st[i-1]=='L')
{
int kt=0;
if (st[i]=='G') {--x;st[i]='L';kt=1;}
if (kt==0)
if (st[i]=='L') {--y;st[i]='B';kt=1;}
if (kt==0)
if (st[i]=='R') {++y;st[i]='G';kt=1;}
if (kt==0)
if (st[i]=='B') {++x;st[i]='R';kt=1;}
}
if (st[i-1]=='R')
{
int kt=0;
if (st[i]=='G') {++x;st[i]='R';kt=1;}
if (kt==0)
if (st[i]=='L') {++y;st[i]='G';kt=1;}
if (kt==0)
if (st[i]=='R') {--y;st[i]='B';kt=1;}
if (kt==0)
if (st[i]=='B') {--x;st[i]='L';kt=1;}
}
}
cout<<"("<<x<<", "<<y<<")";
return 0;
}