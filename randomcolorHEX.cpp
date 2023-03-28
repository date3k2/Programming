#include <bits/stdc++.h>
#define fo(i, l, h) for (int i = l; i <= h; ++i)
#define ll long long
using namespace std;
string hex_color_code()
{
    string color = "\"#";
    char hex_char[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    fo(i, 0, 5)
        color += hex_char[rand() % 16];
    return color+"\"";
}
int main(int argc, char const *argv[])
{
    srand(time(0));
    cout << hex_color_code();
    return 0;
}
