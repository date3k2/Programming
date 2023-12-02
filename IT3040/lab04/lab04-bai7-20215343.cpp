#include <bits/stdc++.h>
using namespace std;

template <class T>
set<T> set_union(const set<T> &a, const set<T> &b)
{
    /*****************
    Nguyen Duy Dat - 20215343
    *****************/
    std::vector<T> v(a.size() + b.size());
    auto it = std::set_union(a.begin(), a.end(), b.begin(), b.end(), v.begin()); // inserter: insert element into set
    v.resize(it - v.begin());
    return set<T>(v.begin(), v.end());
}

template <class T>
set<T> set_intersection(const set<T> &a, const set<T> &b)
{
    /*****************
    Nguyen Duy Dat - 20215343
    *****************/
    vector<T> c(a.size() + b.size());
    auto it = set_intersection(a.begin(), a.end(), b.begin(), b.end(), c.begin());
    c.resize(it - c.begin());
    return set<T>(c.begin(), c.end());
}

template <class T>
void print_set(const std::set<T> &a)
{
    for (const T &x : a)
    {
        std::cout << x << ' ';
    }
    std::cout << std::endl;
}

int main()
{
    std::set<int> a = {1, 2, 3, 5, 7};
    std::set<int> b = {2, 4, 5, 6, 9};
    std::set<int> c = set_union(a, b);
    std::set<int> d = set_intersection(a, b);

    std::cout << "Union: ";
    print_set(c);
    std::cout << "Intersection: "; print_set(d);

    return 0;
}