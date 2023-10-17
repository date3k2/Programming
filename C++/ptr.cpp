#include <iostream>
#define loop(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
int main()
{
    // int a[] = {1, 2, 3, 4, 5};
    // int *p = a;
    // *p++ = 6;
    // // cout << *p++ << endl;
    // cout<<*p;
    // for(auto i:a)
    //     cout<<i<<" ";
    // int *p = (int*) malloc(5*sizeof(int)); // allocate 5 int
    // int *q = (int*) realloc(p, 10*sizeof(int)); // reallocate to 10
    int i = 10;
    int *p = &i;
    i = *p - (--i);
    // cout << --i << endl;
    // cout << *p;
    cout << i <<" " << *p;
    realloc(p, 10*sizeof(int));
    return 0;
}