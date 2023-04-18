
int d=2,dem=0,N=(1<<n)-1;
fo(i,0,N)
{ 
    if (kt[i]==1) continue;
        int v= i^d;
        if ((v&(v-1))==0) 
        {
            write(n,i);
            kt[i]=1;
            ++dem;
            d=i;
        }
}

for (int i=N-1; i>=0; --i) 
{ 
    if (kt[i]==1) continue;
        int v= i^d;
        if ((v&(v-1))==0) 
        {
            write(n,i);
            kt[i]=1;
            ++dem;
            d=i;
        }
}
while (dem<N+1)
fo(i,0,N)
{ 
    if (kt[i]==1) continue;
        int v= i^d;
        if ((v&(v-1))==0) 
        {
            write(n,i);
            kt[i]=1;
            ++dem;
            d=i;
        }
}