#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*****************
    Nguyen Duy Dat 20215343
    *****************/
    int n; // Nhap so phan tu cua mang
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) // Nhap mang
        cin >>
            a[i];
    for (int i = 0; i < n; ++i) // Duyet qua cac phan tu
    {
        string subArr = "";
        for (int j = i; j < n; ++j) // Voi moi phan tu tiep theo, cong don them vao chuoi subArr va in ra
        {
            subArr += to_string(a[j]) + " ";
            cout << subArr << "\n";
        }
    }
    return 0;
}