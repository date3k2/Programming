#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s1,s2;
int dem=0;
cin>>s1;
cin>>s2;
fo(i,0,s1.length()-1)
  if (isupper(s1[i])) s1[i] = s1[i] + 32;
fo(i,0,s2.length()-1)
  if (isupper(s2[i])) s2[i] = s2[i] + 32;
 while  (s1.find(s2)<1e8)    s1.replace(s1.find(s2),s2.length()," ");
stringstream ss(s1);
string token;
while (ss >> token) {
++dem;
}
cout<<dem;
return 0;
}