#include <bits/stdc++.h>
#define fo(i,l,h) for(long long i=l;i<=h;++i)
#define ll long long
using namespace std;
int n;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n;
fo(i,1,n) 
cout<<(i*i*i*i-9*i*i+24*i-16)/2<<"\n";
return 0;
}