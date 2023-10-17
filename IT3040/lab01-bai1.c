#include <stdio.h>
int main()
{
    int x, y, z;                           // khai bao 3 bien x, y, z
    int *ptr;                              // khai bao con tro kieu nguyen ptr
    printf("Enter three integers: ");      // In ra thong bao nhap 3 so nguyen
    scanf("%d %d %d", &x, &y, &z);         // Nhap 3 so nguyen x, y, z
    printf("\nThe three integers are:\n"); // In ra thong bao 3 so nguyen vua nhap
    ptr = &x;                              // Gan dia chi cua x cho con tro ptr
    printf("x = %d\n", *ptr);              // In ra gia tri cua bien x thong qua con tro ptr

    /*****************
    Nguyen Duy Dat 20215343
    *****************/
    ptr = &y;                 // Gan dia chi cua y cho con tro ptr
    printf("y = %d\n", *ptr); // In ra gia tri cua bien y thong qua con tro ptr
    ptr = &z;                 // Gan dia chi cua z cho con tro ptr
    printf("z = %d\n", *ptr); // In ra gia tri cua bien z thong qua con tro ptr
    return 0;
}