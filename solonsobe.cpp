#include <bits/stdc++.h>
using namespace std;
double a,b;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>a>>b;
int s=a>b;
s=2*s-1;
cout<<(s*(a-b)+a+b)/2<<" "<<(-s*(a-b)+a+b)/2;
}
