#include <bits/stdc++.h>
using namespace std;
double a[100005],b[100005],c[100005],d[100005];
int n;
int main()
{
cin>>n;
for (int i=1;i<=n;i++) cin>>a[i]>>b[i]>>c[i]>>d[i];
cout<<fixed;
cout<<setprecision(3)<<(fabs(*max_element(a+1,a+1+n)-*min_element(a+1,a+1+n))+fabs(*max_element(b+1,b+1+n)-*min_element(b+1,b+1+n))+
fabs(*max_element(c+1,c+1+n)-*min_element(c+1,c+1+n))+fabs(*max_element(d+1,d+1+n)-*min_element(d+1,d+1+n)));

return 0;
}
