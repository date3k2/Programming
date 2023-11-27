#include <stdio.h>
int *a;
int n, tmp;

int main()
{
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *a = new int[n]; // Allocate memory

    /*****************
    Nguyen Duy Dat 20215343
    *****************/

    for (int i = 0; i < n; i++)
        scanf("%d", a + i);

    printf("The input array is: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", *(a + i));
    printf("\n");

    // Sort array using bubble sort

    /*****************
    Nguyen Duy Dat 20215343
    *****************/
    for (int i = 0; i < n - 1; ++i) // Duyet tu dau den cuoi mang
    {
        for (int j = i + 1; j < n; ++j) // Duyet tu phan tu sau phan tu dang xet den cuoi mang
        {
            if (*(a + i) > *(a + j)) // Neu phan tu dang xet lon hon phan tu dang xet sau no thi hoan doi
            {
                tmp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = tmp;
            }
        }
    }
    printf("The sorted array is: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", *(a + i));
    printf("\n");

    delete[] a;
    return 0;
}