#include <bits/stdc++.h>
using namespace std;
void reversearray(int arr[], int size)
{
    int tmp; // khoi tao bien temp de hoan doi cac phan tu

    /*****************
    Nguyen Duy Dat 20215343
    *****************/
    for (int i = 0; i < size / 2; ++i) // Duyet mang tu dau den giua de hoan doi 2 phan tu doi xung, vi neu duyet toan bo mang thi se bi hoan doi 2 lan
    {
        tmp = arr[i];
        arr[i] = arr[size - i - 1]; // Hoan doi su dung chi so mang
        arr[size - i - 1] = tmp;
    }
}

void ptr_reversearray(int *arr, int size)
{
    int tmp; // Khoi tao bien temp de hoan doi cac phan tu

    /*****************
    Nguyen Duy Dat 20215343
    *****************/
    for (int i = 0; i < size / 2; ++i)
    {
        tmp = *(arr + i);
        *(arr + i) = *(arr + size - i - 1); // Hoan doi su dung con tro
        *(arr + size - i - 1) = tmp;
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    reversearray(a, 6);
    for (int i = 0; i < 6; ++i)
    {
        cout << a[i] << " ";
    }
    int arr2[] = {4, -1, 5, 9};
    ptr_reversearray(arr2, 4);
    for (int i = 0; i < 4; i++)
        cout << arr2[i] << " ";
    return 0;
}