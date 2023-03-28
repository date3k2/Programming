#include <bits/stdc++.h>
using namespace std;
unsigned long long a,b,s;
unsigned long long mu(int a,int n)
{
if (n==0) return(1);
if (n==1) return(a);
if (n%2==0) return(mu(a,n/2)*mu(a,n/2));
else return (mu(a,n/2)*mu(a,n/2)*a);
}
short dem,c[40];
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>a>>b;dem=0;s=a*b;
 cout<< a<<" x "<<b<<" = ";
 while (b!=0)
 {
     ++dem;
     c[dem]=b%10;
     b=b/10;

 }
 for(int i=1;i<=dem-1;++i) cout<<a*c[i]*mu(10,i-1)<<" + ";
 cout<<a*c[dem]*mu(10,dem-1)<<" = "<<s;
 return 0;
}
