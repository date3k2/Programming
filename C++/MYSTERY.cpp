#include <bits/stdc++.h>
using namespace std;
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define MOD 20122007
long long fp(int x)
{
if (x==0) return 1;
long long t=fp(x/2);
if (x %2==1) return ((t*t*3) % MOD) ;
else return ((t*t) % MOD);
}
int n;
long long kq=1;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>n;
fo(i,1,trunc(sqrt(n)))
if (n % i==0) {if (n/i!=i) kq= ((kq % MOD) * (fp(n/i)-1) % MOD * (fp(i)-1) % MOD ) % MOD;
else if (n/i==i) kq=(kq % MOD * (fp(i)-1) % MOD ) % MOD;
}
cout<<kq;
//cout<<fp(n);
}
