#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    struct node
    {
        int next[100]; // edges to other nodes
        int len;       // length of palindrome
        int sufflink;  // maximum length suffix palindrome
        int num;       // number of palindromes in this node
    };

    bool addLetter(int pos, string s, node tree[], int &num, int &suff)
    {
        int cur = suff, curlen = 0;
        int let = s[pos] - '0';

        while (true)
        {
            curlen = tree[cur].len;
            if (pos - 1 - curlen >= 0 && s[pos - 1 - curlen] == s[pos])
                break;
            cur = tree[cur].sufflink;
        }
        if (tree[cur].next[let])
        {
            suff = tree[cur].next[let];
            return false;
        }

        num++;
        suff = num;
        tree[num].len = tree[cur].len + 2;
        tree[cur].next[let] = num;

        if (tree[num].len == 1)
        {
            tree[num].sufflink = 2;
            tree[num].num = 1;
            return true;
        }

        while (true)
        {
            cur = tree[cur].sufflink;
            curlen = tree[cur].len;
            if (pos - 1 - curlen >= 0 && s[pos - 1 - curlen] == s[pos])
            {
                tree[num].sufflink = tree[cur].next[let];
                break;
            }
        }

        tree[num].num = 1 + tree[tree[num].sufflink].num;

        return true;
    }
    string longestPalindrome(string s) 
    {
        int len;
        node tree[1005];
        int num = 2;  // node 1 - root with len -1, node 2 - root with len 0
        int suff = 2; // max suffix palindrome
        long long ans;
        int maxLen = 0;
        int startPos = 0;
        len = s.length();

        tree[1].len = -1;
        tree[1].sufflink = 1;
        tree[2].len = 0;
        tree[2].sufflink = 1;

        for (int i = 0; i < len; i++)
        {
            addLetter(i, s, tree, num, suff);
            if (tree[suff].len > maxLen)
            {
                maxLen = tree[suff].len;
                startPos = i - maxLen + 1;
            }
        }
        return s.substr(startPos, maxLen);
    }
};