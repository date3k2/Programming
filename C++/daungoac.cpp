#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
using namespace std;
int t;
int main()
{
    cin >> t;

    while (t--)
    {
        string s;
        getline(std::cin >> std::ws, s);
        int count = 0;
        stack<int> sk;
        fo(i, 0, s.length() - 1)
        {
            if (s[i] == '(')
            {
                ++count;
                sk.push(count);
                cout << count << " ";
            }
            if (s[i] == ')')
            {
                cout << sk.top() << " ";
                sk.pop();
            }
        }
        cout << "\n";
    }
    return 0;
}