#include<bits/stdc++.h>
using namespace std;
vector<int>x[2020];
stack<int>z;
long long n,m,u,v,a[2020],num[2020],low[2020],s=0,res=0,kt[2020],kq[2020],ans=0;
void dfs(int i)
{
    s++;
    num[i]=s;
    low[i]=s;
    z.push(i);
    for(int j=0;j<x[i].size();j++)
    {
        int k=x[i][j];
        kt[k]=true;
        if(a[k]==-1) continue;
        if(a[k]==1)
        {
            low[i]=min(low[i],min(low[k],num[k]));
        }
        else
        {
            a[k]=1;
            dfs(k);
            low[i]=min(low[i],low[k]);
        }
    }
    if(num[i]==low[i])
    {
        int kt=0,s1=1;
        while(s1==1)
        {
            a[z.top()]=-1;
            for(int j=0;j<x[z.top()].size();j++)
            {
                int k=x[z.top()][j];
                if(low[k]!=low[i]) kt=1;
            }
            if(z.top()==i) s1--;
            z.pop();
        }
        if(kt==0)
        {
            kq[++ans]=i;
        }
    }
}
int main()
{
    memset(a,0,sizeof(a));
    memset(kt,false,sizeof(kt));
    kq[1]=1;
    kq[2]=2;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>u>>v;
        x[u].push_back(v);
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]==0 && x[i].size())
        {
            a[i]=1;
            dfs(i);
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(!kt[i])
        {
            if(res==0) res=i;
            else {cout<<"NO"; return 0;}
        }
    }
    if(res==0)
    {
        if(ans>1) cout<<"NO";
        else cout<<"YES"<<"\n"<<kq[1]<<" "<<kq[2];
    }
    else
    {
        if(ans<=1) cout<<"YES"<<"\n"<<kq[1]<<" "<<res;
        else cout<<"NO";
    }
}
