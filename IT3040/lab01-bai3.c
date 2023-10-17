#include <stdio.h>
int main()
{
    int x, y, z;                   // khai bao 3 bien x, y, z
    int *ptr;                      // khai bao con tro kieu nguyen ptr
    scanf("%d %d %d", &x, &y, &z); // Nhap 3 so nguyen x, y, z
    printf("Here are the values of x, y, and z:\n");
    printf("%d %d %d\n", x, y, z); // In ra 3 so nguyen vua nhap

    /*****************
    Nguyen Duy Dat 20215343
    *****************/
    ptr = &x;    // Gan dia chi cua x cho con tro ptr
    *ptr += 100; // Tang gia tri cua bien x len 100
    ptr = &y;    // Gan dia chi cua y cho con tro ptr
    *ptr += 100; // Tang gia tri cua bien y len 100
    ptr = &z;    // Gan dia chi cua z cho con tro ptr
    *ptr += 100; // Tang gia tri cua bien z len 100
    printf("Once again, here are the values of x, y, and z:\n");
    printf("%d %d %d\n", x, y, z);
    return 0;
}