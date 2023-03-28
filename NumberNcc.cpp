#include <iostream>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    cout<<((n%2)? -(n+1)/2 : n/2);
    return 0;
}