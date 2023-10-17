int counteven(int *arr, int size)
{
    int count = 0; // Khoi tao bien dem so so chan

    /*****************
    Nguyen Duy Dat 20215343
    *****************/
    for (int i = 0; i < size; ++i) // Duyet qua tat ca cac phan tu trong mang
        if (arr[i] % 2 == 0)
            ++count; // Neu phan tu thu i la so chan thi tang bien dem len 1

    return count;
}