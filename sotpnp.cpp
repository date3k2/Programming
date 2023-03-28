#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
using namespace std;
unsigned long long mu(int a,int n)
{
if (n==0) return(1);
if (n==1) return(a);
if (n%2==0) return(mu(a,n/2)*mu(a,n/2));
else return (mu(a,n/2)*mu(a,n/2)*a);
}
int t,kq[100007];
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>t;
long long n;
fo(dem,1,t)
{
cin>>n;
if (n<10) kq[dem]=n;else
{
int a=0,so=0;
    while (n>9)
{
stringstream ss2;
ss2<<n;
string st=ss2.str();
short cs=st[0]-48;
short d=st.length();
long long sum=mu(10,d-1);
fo(i,1,d-1)
{if (st[i]-48>=cs) sum+=mu(10,d-i-1);};
if (sum %10==0) so+=cs;
a+=cs;
n=n-sum*cs;
}
if (so>=n)
kq[dem]=a;
else kq[dem]=a+ abs(n-so);
}
}
fo(i,1,t) cout<<kq[i]<<" ";
return 0;
}
