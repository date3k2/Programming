#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
vector<int> s;
string st="";
int n;
void se(int k)
{
  if (k== n+1) 
  {
      st.clear();
      st.insert(0,n,'0');
      for(auto i: s) st[i-1]='1';
      cout<<st;
      cout<<"\n";
  } else
  {
      s.push_back(k);
      se(k+1);
      s.pop_back();
      se(k+1);
  }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n;
se(1);
return 0;
}