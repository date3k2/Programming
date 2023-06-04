#include <bits/stdc++.h>
#define loop(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int n = s.length();
        int i = n - 1;
        int count = 0;
        while (i >= 0 && s[i] == ' ')
        {
            i--;
        }
        while (i >= 0 && s[i] != ' ')
        {
            count++;
            i--;
        }
        return count;
    }
};
int main()
{
    string s;
    getline(cin, s);
    Solution obj = Solution();
    cout << obj.lengthOfLastWord(s);
    return 0;
}