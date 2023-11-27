#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*****************
    Nguyen Duy Dat 20215343
    *****************/
    int n; // Nhap so phan tu cua mang
    cin >> n;
    //  Cap phat dong cho 2 ma tran
    int **m1 = new int *[n], **m2 = new int *[n];
    for (int i = 0; i < n; i++)
    {
        m1[i] = new int[n];
        m2[i] = new int[n];
    }

    for (int i = 0; i < n; ++i) // Nhap ma tran 1
        for (int j = 0; j < n; ++j)
            cin >> m1[i][j];
    for (int i = 0; i < n; ++i) // Nhap ma tran 2
        for (int j = 0; j < n; ++j)
            cin >> m2[i][j];

    // In ra tong 2 ma tran
    for (int i = 0; i < n; ++i) // Nhap mang
    {
        for (int j = 0; j < n; ++j)
            cout << m1[i][j] + m2[i][j] << " ";
        cout << "\n";
    }

    // In ra tich 2 ma tran
    for (int i = 0; i < n; ++i) // Nhap mang
    {
        for (int j = 0; j < n; ++j)
        {
            int sum = 0; // Tong cac tich cua hang i va cot j bang phan tu i,j cua ma tran tich
            for (int k = 0; k < n; ++k)
                sum += m1[i][k] * m2[k][j];
            cout << sum << " ";
        }
        cout << "\n";
    }
    // Giai phong bo nho
    for (int i = 0; i < n; i++)
    {
        delete[] m1[i];
        delete[] m2[i];
    }
    delete[] m1;
    delete[] m2;
    return 0;
}