#include <bits/stdc++.h>
using namespace std;
//clock_t start,e;
int n;
unsigned long long s;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>n;
auto start=clock();
for (int i=1;i<=n;i++)
s+=i;
auto e=clock();
cout.tie(0);
cout<<s<<"\n";
cout<<fixed;
cout<<setprecision(6)<<(((double)(e-start))/CLOCKS_PER_SEC);
}
