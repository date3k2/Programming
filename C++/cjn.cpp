#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int main() {
// check if n is perfect number
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n/2;++i) {
        if(n%i==0) {
            sum+=i;
        }
    }
    if(sum==n) {
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
    return 0;
}