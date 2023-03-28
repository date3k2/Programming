#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
string st;
char s[1000005];
map<char,int> m;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>st;
int n=st.length(),dem=0;
fo(i,0,n-1) 
{s[i+1]=st[i];
 ++m[s[i+1]];}
sort(s+1,s+1+n);
string k="",str="";
for (auto i: m) 
{
    if (i.second &1)  {++dem; k.insert(0,i.second,i.first);}
    if (dem>1) { cout<<"NO SOLUTION"; exit(0);} 
}
for (auto i:m)
{
    if (i.second %2==0) str.insert(str.length()/2,i.second,i.first);
}
str.insert(str.length()/2,k);
cout<<str;
return 0;
}