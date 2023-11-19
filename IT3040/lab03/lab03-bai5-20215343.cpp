#include <iostream>
using namespace std;

int binom(int n, int k) {
    if (k > n) return 0;
    if (k == 0) return 1;
    return binom(n-1, k) + binom(n-1, k-1);
}
int C[100][100];
int binom2(int n, int k){
    
    //# Khử đệ quy
    /*****************
    Nguyễn Duy Đạt - 20215343
    *****************/
    if (k > n) return 0;
    if (k == 0) return 1;
    if (C[n][k] > 0) return C[n][k];
    C[n][k] = binom2(n-1, k) + binom2(n-1, k-1);
    return C[n][k];
}

int main() {
    int m;
    cin >> m;
    for (int n = 1; n <= m; ++n){
        for (int k = 0; k <= n; ++k)
            printf("%d ", binom(n, k));
        printf("\n");
    }
    for (int n = 1; n <= m; ++n){
        for (int k = 0; k <= n; ++k)
            printf("%d ", binom2(n, k));
        printf("\n");
    }
    return 0;
}