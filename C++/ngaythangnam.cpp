#include <bits/stdc++.h>
using namespace std;
int a,b,c;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>a>>b>>c;
if ((a<=0) || (b<=0) || (a>31) || (b>12)) {cout<<"No"; exit(0);};
if ((a==29) && (b==2))
{
    if ((c%100==0) && (c%400!=0)) { cout<<"No"; exit(0);};
if (c%4==0) {cout<<"Yes"; exit(0);} else {cout<<"No"; exit(0);};
}
if (((b==4) || (b==6) || (b==9) || (b==11)) && (a==31)) { cout<<"No"; exit(0);};
if ((b==2) && (a>=29)) {cout<<"No"; exit(0);};
cout<<"Yes";
return 0;
}
