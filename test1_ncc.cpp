#include <bits/stdc++.h>

#define fo(i,l,h) for(int i=l;i<=h;++i)

#define ll long long

using namespace std;

int n;

string Sum(string a, string b) {

string sum="";

short s=0;

    while (a.length()<b.length()) a="0"+a;

    while (b.length()<a.length()) b="0"+b;

    for(int i=a.length()-1;i>=0;--i) {

        s=s+a[i]+b[i]-96;

        if (s<10) {

            sum=to_string(s)+sum;

            s=0;

        }

        else {

            sum=to_string(s%10)+sum;

            s=1;

        }

    }

if (s==1) sum='1'+sum;

return sum;

}

int main()

{

ios_base::sync_with_stdio(false);

cin.tie(NULL);

cin>>n;

string f[n+3];

f[0]="4"; f[1]="7"; f[2]="5";

fo(i,3,n) 

f[i] = Sum(Sum(f[i-3],f[i-2]),f[i-1]);

cout<<f[n];

return 0;

}