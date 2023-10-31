#include <stdio.h>

void rotate(int &x, int &y, int &z) {
    /*****************
    Nguyen Duy Dat - 20215343
    *****************/
    int temp = x;
    x = y;
    y = z;
    z = temp;
}

int main() {
    int x, y, z;
    
    //# Nhập 3 số nguyên
    /*****************
    Nguyen Duy Dat - 20215343
    *****************/
    scanf("%d%d%d", &x, &y, &z);
    printf("Before: %d, %d, %d\n", x, y, z);
    rotate(x, y, z);
    printf("After: %d, %d, %d\n", x, y, z);
    
    return 0;
}