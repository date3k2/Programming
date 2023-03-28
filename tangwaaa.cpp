#include <bits/stdc++.h>
using namespace std;
long long a,b,v,dem,s;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>a>>b>>v;
s=0;
if ((a<v) && (a<=b)) { cout<<0; exit(0);};
while (s<v)
{
s=s+a;
dem++;
if (s>=v) break; else s=s-b;
}
cout<<dem;
return 0;
}
