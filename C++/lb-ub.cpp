#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::vector<int> v = {1, 2, 3, 5, 8, 8, 8};

    // Lower bound
    auto it1 = lower_bound(v.begin(), v.end(), 4) - v.begin();
    cout << "Lower bound of 4 is " << it1 << std::endl;

    // Upper bound
    auto it2 = upper_bound(v.begin(), v.end(), 0) - v.begin();
        cout << "Upper bound of 4 is " << it2 << std::endl;
    return 0;
}
