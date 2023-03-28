#include <iostream>
using namespace std;
long long lt(int n, int k)
{
if (k==1) return n%10;
long long a=lt(n,k/2)%10;
if (k&1) return((a*a*n) %10);
else return((a*a)%10);
}
int main()
{
int n,k;
cin>>n>>k;
n=n%10;
if (lt(n,k)>=5) cout<<"Thoa man";
else cout<<"Khong thoa man";
return 0;
}