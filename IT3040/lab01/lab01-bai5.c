double *maximum(double *a, int size)
{
    double *max; // Khai bao con tro kieu double de luu gia tri lon nhat
    max = a;     // Khoi tao gia tri lon nhat ban dau la phan tu dau tien cua mang
    if (a == NULL)
        return NULL; // Neu mang rong thi tra ve NULL

    /*****************
    Nguyen Duy Dat 20215343
    *****************/
    for (int i = 0; i < size; ++i) // Duyet qua tat ca cac phan tu trong mang
        if (a[i] > *max)
            max = &a[i]; // Neu phan tu thu i lon hon max thi cap nhat gia tri lon nhat cho max
    return max;
}