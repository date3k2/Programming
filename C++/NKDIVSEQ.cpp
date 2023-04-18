#include <bits/stdc++.h>
using namespace std;
unsigned long long s=0,i=0,d=0,n;
int main()
{
cin>>n;
if (n==1) cout<<1;
else
{
i=1;s=1;d=1;
while (s<n)
{
i++;
s=s+i;
d++;
while  ((d %(i))!=0) d++;
d=d+i*(i-1);
if (s>=n) break;
}
cout<<d-i*(s-n);
}
return 0;
}
