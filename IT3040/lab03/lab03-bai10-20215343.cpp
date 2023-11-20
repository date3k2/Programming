#include <bits/stdc++.h>
using namespace std;
/*
Nguyen Duy Dat 20215343
*/
string s;
int T, N, H;
string str1, str2;
bool checkHamming(string st1, string st2)
{
    int lens = N;
    int cnt = 0;
    for (int i = 0; i < lens; i++)
    {
        if (st1[i] != st2[i])
            ++cnt;
    }
    return cnt == H;
}
void print_sol()
{
    if (checkHamming(str1, str2))
        cout << str2 << '\n';
}
void TRY(int i)
{
    for (int j = 0; j <= 1; ++j)
    {
        str2[i] = j + '0';
        if (i == N - 1)
            print_sol();
        else
            TRY(i + 1);
    }
}
int main()
{
    /*
    Nguyen Duy Dat 20215343
    */
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--)
    {
        cin >> N >> H;
        str1 = string(N, '0');
        str2 = string(N, '0');
        TRY(0);
    }
    return 0;
}