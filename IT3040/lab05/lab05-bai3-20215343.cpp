#include <iostream>
using namespace std;
#include <string.h>
#include <stack>
/*
    Nguyễn Duy Đạt - 20215343
*/
int par(string str)
{
    int a = str.length();
    stack<char> S; // Dùng stack để lưu các kí tự mở ngoặc
    char x, y;
    for (int i = 0; i < a; i++)
    {
        x = str[i];
        if (x == '(' || x == '[' || x == '{')
        {
            S.push(x);
        }
        else
        {
            if (S.size() == 0)
                return 0;
            if (x == ')')
            {
                if (S.top() == '(')
                {
                    S.pop();
                }
                else
                    return 0;
            }
            else if (x == ']')
            {
                if (S.top() == '[')
                {
                    S.pop();
                }
                else
                    return 0;
            }
            else if (x == '}')
            {
                if (S.top() == '{')
                {
                    S.pop();
                }
                else
                    return 0;
            }
        }
    }
    if (S.size() != 0) // sua thanh S.size() != 0
    {
        return 0;
    }
    else
        return 1;
}

int main()
{
    int n;
    string str;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        cout << par(str) << endl;
    }

    return 0;
}