#include <bits/stdc++.h>
using namespace std;
#define fo(i, l, h) for (int i = l; i <= h; ++i)
int n;
bool chosen[100];
vector<int> pm;
void search()
{
  if (pm.size() == n)
  {
    for (auto i : pm)
      cout << i << " ";
    cout << endl;
  }
  else
  {
    fo(i, 1, n)
    {
      if (chosen[i] == true)
        continue;
      chosen[i] = true;
      pm.push_back(i);
      search();
      chosen[i] = false;
      pm.pop_back();
    }
  }
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  search();
  return 0;
}