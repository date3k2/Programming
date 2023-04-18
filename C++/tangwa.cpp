#include <bits/stdc++.h>
using namespace std;
long long a,b,v,dem;
int main()
{
dem=1;
cin>>a>>b>>v;
v-=a;
if (v<=0) { cout<<1; exit(0);};
dem+=v/ (a-b);
if (v% (a-b)!=0) dem++;
cout<<dem;
return 0;
}
