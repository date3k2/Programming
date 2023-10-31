#include <bits/stdc++.h>
using namespace std;
/*
Nguyen Duy Dat 20215343
*/

// define a struct to represent a big number
struct bigNum
{
    char sign;     // the sign of the number (+/-)
    char num[101]; // the digits of the number (up to 100 digits)
};

// function to input and preprocess the big numbers
void input(bigNum &num1, bigNum &num2)
{
    string tmp;
    cin >> tmp;

    // store the sign of the first number
    num1.sign = tmp[0];

    // store the digits of the first number in reverse order
    int lens1 = tmp.length() - 1;
    for (int i = 0; i < lens1; i++)
    {
        num1.num[100 - lens1 + i + 1] = tmp[i + 1];
    }

    // pad the remaining digits with zeros
    for (int i = 0; i < 100 - lens1 + 1; i++)
        num1.num[i] = '0';

    // repeat the same process for the second number
    cin >> tmp;
    num2.sign = tmp[0];
    int lens2 = tmp.length() - 1;
    for (int i = 0; i < lens2; i++)
    {
        num2.num[100 - lens2 + i + 1] = tmp[i + 1];
    }
    for (int i = 0; i < 100 - lens2 + 1; i++)
        num2.num[i] = '0';
}

// function to add two positive big numbers
void add(char res[], char *num1, char *num2)
{
    int c = 0;

    // iterate through the digits of the numbers from right to left
    for (int i = 100; i >= 0; i--)
    {
        int tmp = (int)num1[i] - 48 + (int)num2[i] - 48 + c;
        c = tmp / 10;
        res[i] = tmp % 10 + 48;
    }
}

// function to subtract two positive big numbers (num1 > num2)
void sub(char res[], char *num1, char *num2)
{
    int c = 0;

    // iterate through the digits of the numbers from right to left
    for (int i = 100; i >= 0; i--)
    {
        int tmp1 = (int)num1[i] - 48;
        int tmp2 = (int)num2[i] - 48;

        if (tmp1 >= tmp2 + c)
        {
            res[i] = tmp1 - tmp2 - c + 48;
            c = 0;
        }
        else
        {
            tmp1 = tmp1 + 10;
            res[i] = tmp1 - tmp2 - c + 48;
            c = 1;
        }
    }
}

// function to multiply two positive big numbers
void multi(char res[], char *num1, char *num2)
{
    // clear the result array
    for (int i = 0; i < 101; i++)
        res[i] = '0';

    // iterate through the digits of the second number from right to left
    for (int i = 100; i >= 0; i--)
    {
        // initialize a temporary array
        char tmp[101];

        // add i number of zeros to the end of the temporary array
        int k;
        for (k = 0; k < i; k++)
            tmp[100 - k] = '0';

        int c = 0, sum = 0;
        // iterate through the digits of the first number from right to left
        for (int j = 100; j >= 0; j--)
        {
            sum = ((int)num1[i] - 48) * ((int)num2[j] - 48) + c;
            tmp[k] = (sum % 10) + 48;
            c = sum / 10;
            k--;
            if (k < 0)
                break;
        }

        // add the temporary array to the result array
        add(res, tmp, res);
    }
}

// function to check if num1 >= num2
bool check(char *num1, char *num2)
{
    int foo1, foo2;
    // find the first non-zero digit of num1
    for (foo1 = 0; foo1 < 101; foo1++)
    {
        if (num1[foo1] != '0')
            break;
    }

    // find the first non-zero digit of num2
    for (foo2 = 0; foo2 < 101; foo2++)
    {
        if (num2[foo2] != '0')
            break;
    }

    // compare the number of digits of num1 and num2
    if (foo1 > foo2)
        return false;
    else if (foo1 < foo2)
        return true;
    else
    { // foo1 == foo2
        int foo = foo1;
        // compare the digits of num1 and num2 from left to right
        while (foo < 101)
        {
            if (num1[foo] < num2[foo])
                return false;
            else if (num1[foo] > num2[foo])
                return true;
            else
            {
                foo++;
            }
        }
    }

    return true;
}

// overloading operator "+" for big numbers
bigNum operator+(bigNum num1, bigNum num2)
{
    bigNum res;

    if (num1.sign == '1' && num2.sign == '1')
    {
        res.sign = '1';
        add(res.num, num1.num, num2.num);
        return res;
    }
    else if (num1.sign == '1' && num2.sign == '0')
    {
        if (check(num1.num, num2.num))
        {
            res.sign = '1';
            sub(res.num, num1.num, num2.num);
            return res;
        }
        else
        {
            res.sign = '0';
            sub(res.num, num2.num, num1.num);
            return res;
        }
    }
    else if (num1.sign == '0' && num2.sign == '1')
    {
        if (check(num1.num, num2.num))
        {
            res.sign = '0';
            sub(res.num, num1.num, num2.num);
            return res;
        }
        else
        {
            res.sign = '1';
            sub(res.num, num2.num, num1.num);
            return res;
        }
    }
    else
    {
        res.sign = '0';
        add(res.num, num1.num, num2.num);
        return res;
    }
}

// overloading operator "-" for big numbers
bigNum operator-(bigNum num1, bigNum num2)
{
    bigNum res;

    if (num1.sign == '1' && num2.sign == '0')
    {
        num2.sign = '1';
        res = num1 + num2;
        return res;
    }
    else if (num1.sign == '1' && num2.sign == '1')
    {
        num2.sign = '0';
        res = num1 + num2;
        return res;
    }
    else if (num1.sign == '0' && num2.sign == '1')
    {
        num2.sign = '0';
        res = num1 + num2;
        return res;
    }
    else
    {
        num2.sign = '1';
        res = num1 + num2;
        return res;
    }
}

// overloading operator "*" for big numbers
bigNum operator*(bigNum num1, bigNum num2)
{
    bigNum res;

    if (num1.sign == '1' && num2.sign == '1')
    {
        res.sign = '1';
        multi(res.num, num1.num, num2.num);
        return res;
    }
    else if (num1.sign == '1' && num2.sign == '0')
    {
        res.sign = '0';
        multi(res.num, num1.num, num2.num);
        return res;
    }
    else if (num1.sign == '0' && num2.sign == '1')
    {
        res.sign = '0';
        multi(res.num, num1.num, num2.num);
        return res;
    }
    else
    {
        res.sign = '1';
        multi(res.num, num1.num, num2.num);
        return res;
    }
}

// function to print a big number
void printBigNumber(bigNum number)
{
    cout << number.sign;
    int start;
    // find the first non-zero digit of the number
    for (start = 0; start < 101; start++)
        if (number.num[start] != '0')
            break;

    // print the digits of the number from left to right
    for (int i = start; i < 101; i++)
        cout << number.num[i];
}

int main()
{
    bigNum num1, num2;
    input(num1, num2);

    // define two big numbers 3 and 4
    bigNum so3, so4;
    so3.sign = '1', so4.sign = '1';
    fill(so3.num, so3.num + 100, '0');
    fill(so4.num, so4.num + 100, '0');
    so3.num[100] = 3 + 48;
    so4.num[100] = 4 + 48;

    // calculate the result using the given formula
    bigNum res = num1 * num2 - so3 * num1 + so4 * num2;
    // Nguyen Duy Dat 20215343
    // print the result
    printBigNumber(res);
}