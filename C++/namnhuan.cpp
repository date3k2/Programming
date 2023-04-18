#include <bits/stdc++.h>
using namespace std;
unsigned long long n;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>n;
if ((n%100==0) && (n%400!=0)) { cout<<"NO"; exit(0);};
if (n%4==0) cout<<"YES"; else cout<<"NO";
return 0;
}
