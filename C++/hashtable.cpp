#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
class myStructure
{
  vector<int> v;
  map<int, int> m;

public:
  void add(int x)
  {
    // if (m.find(x) != m.end()) return;
    int index = v.size();
    v.push_back(x);
    m.insert(std::pair<int, int>(x, index));
  }
  void remove(int x)
  {
    if (m.find(x) == m.end())
      return;
    int index = m.at(x);
    m.erase(x);
    int last = v.size() - 1;
    swap(v[index], v[last]);
    v.pop_back();
    m.at(v[index]) = index;
  }
  void print()
  {
    for (auto i : v)
      cout << i << " ";
    cout << "\n";
    cout << v.size();
  }
};
int n;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  myStructure ds;
  cin >> n;
  fo(i, 1, n)
  {
    int x;
    cin >> x;
    ds.add(x);
  }
  ds.remove(3);
  ds.print();
  return 0;
}