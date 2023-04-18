#include <bits/stdc++.h>
using namespace std;
long long n;
int main()
{
freopen("dat.inp","r",stdin);
freopen("dat.out","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>n;
 while (n!=1) {
     cout<<n<<" ";
     if (n % 2==0) n=n/2; else n= 3*n+1;}
 cout<<"1";
 return 0;      
}