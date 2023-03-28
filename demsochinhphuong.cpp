#include <bits/stdc++.h>
using namespace std;
long long n1,m1;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>n1>>m1;
long long m=max(n1,m1),n= min(n1,m1);
if (sqrt(n)==trunc(sqrt(n))) cout<<trunc(sqrt(m))-sqrt(n)+1;
else cout<<trunc(sqrt(m))-trunc(sqrt(n));
return 0;
}