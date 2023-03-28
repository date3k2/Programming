#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int n;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n;
short int row,column;
bool kt=0;
int a[n][n];
fo(i,1,n) 
 fo(j,1,n) {
    cin>>a[i][j];
    if (a[i][j]==0) {
        row=i;
        column=j;
    }
 }
fo(i,1,n) if (a[i][column]==1) kt=1;
fo(j,1,n) if (a[row][j]==1) kt=1;
if (kt==1) cout<<"Yes";
else cout<<"No";
return 0;
}