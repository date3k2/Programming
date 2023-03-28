#include <bits/stdc++.h>
using namespace std;
int s[15];
bool nhuan(long long c)
{
if ((c%100==0) && (c%400!=0)) return false;
if (c % 4==0) return true;
return false;
}
long long a,b,c;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>a>>b>>c;
if ((a<=0) || (b<=0) || (a>31) || (b>12) || (c<=0)) {cout<<"ERROR"; exit(0);};
if (((b==4) || (b==6) || (b==9) || (b==11)) && (a>30)) { cout<<"ERROR"; exit(0);};
if ((b==2) && (a>29)) { cout<<"ERROR"; exit(0);};
if ((b==2) && (a==29) && (nhuan(c)==0)) { cout<<"ERROR"; exit(0);};
if (nhuan(c)==1) s[2]=1;
 s[0]=0,s[1]=31,s[2]+=28+s[1],s[3]=31+s[2],s[4]=30+s[3],s[5]=31+s[4],s[6]=30+s[5],s[7]=31+s[6],s[8]=31+s[7],s[9]=30+s[8],s[10]=31+s[9],s[11]=30+s[10];
int d=(s[b-1]+a)%7;
if (d==1) cout<<"thu hai";
if (d==2) cout<<"thu ba";
if (d==3) cout<<"thu tu";
if (d==4) cout<<"thu nam";
if (d==5) cout<<"thu sau";
if (d==6) cout<<"thu bay";
if (d==0) cout<<"chu nhat";
return 0;
}