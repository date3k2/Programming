#include <bits/stdc++.h>
using namespace std;
int a[1000],n,s;
vector <int> v;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>n>>s;
for (int i=1;i<=n;i++) cin>>a[i];
sort(a+1,a+1+n);
for (int i=1;i<=n;i++) {cout<<a[i]<<" ";v.push_back(a[i]);}
vector <int>::iterator loww;
loww=lower_bound(v.begin(),v.end(),s);
cout<<"\n"<<loww-v.begin()+1;
}

