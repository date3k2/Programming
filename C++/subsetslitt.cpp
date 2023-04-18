#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
using namespace std;
int n, m;
int a[1005];
int b[5005];
void Ghinhan() {
int i;
for (i=1 ; i<= m ;i++)
cout<<b[a[i]]<<" ";
cout<<endl;
}
void MSet(int i){
int j;
for (j = a[i-1] +1; j<= n-m+i; j++) {
a[i] = j;
if (i==m) Ghinhan();
else MSet(i+1);
}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    a[0]=0;
    fo(i, 1, n) cin >> b[i];
    sort(b + 1, b + 1 + n);
    MSet(1);
    return 0;
}