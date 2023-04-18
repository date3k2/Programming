#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int n;
vector <int> v;
unordered_map <int,short> m;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n;
fo(i,1,n)
{
    int x,y;
    cin>>x>>y;
    v.push_back(x);
    v.push_back(y);
    m[x]=1;
    m[y]=-1;
}
sort(v.begin(),v.end());
int Max_customers=0,s=0;
for (auto i:v)
{ 
s+=m[i];
Max_customers=max(Max_customers,s);
}
cout<<Max_customers;
return 0;
}