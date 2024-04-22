#include <stdio.h>
#include <string.h>
#define N 40

// function to print huge integer
void print(int a[N])
{
    int i;
    for (i = N-1; i >= 0; i--)
    {
        if (a[i] != 0)
        {
            break;
        }
    }
    if (i < 0)
    {
        printf("0");
        return;
    }
    for (; i >= 0; i--)
    {
        printf("%04d", a[i]);
    }
}

// function to add two huge integers
void add(int a[N], int b[N], int c[N])
{
    int carry = 0, i;
    for (i = 0; i < N; i++)
    {
        int sum = a[i] + b[i] + carry;
        c[i] = sum % 10000;
        carry = sum / 10000;
    }
}

// function to subtract two huge integers
void subtract(int a[N], int b[N], int c[N])
{
    int borrow = 0, i;
    for (i = 0; i < N; i++)
    {
        int diff = a[i] - b[i] - borrow;
        if (diff < 0)
        {
            diff += 10000;
            borrow = 1;
        }
        else
        {
            borrow = 0;
        }
        c[i] = diff;
    }
}

int main()
{
    int a[N] = {0}, b[N] = {0}, c[N] = {0};
    char str1[N+1], str2[N+1];

    printf("Enter first huge integer: ");
    scanf("%s", str1);
    int len1 = strlen(str1);
    int i, j, k = 0;
    for (i = len1-1; i >= 0; i -= 4)
    {
        int digit = 0;
        for (j = i; j >= i-3 && j >= 0; j--)
        {
            digit = digit*10 + (str1[j] - '0');
        }
        a[k++] = digit;
    }

    printf("Enter second huge integer: ");
    scanf("%s", str2);
    int len2 = strlen(str2);
    k = 0;
    for (i = len2-1; i >= 0; i -= 4)
    {
        int digit = 0;
        for (j = i; j >= i-3 && j >= 0; j--)
        {
            digit = digit*10 + (str2[j] - '0');
        }
        b[k++] = digit;
    }

    add(a, b, c);
    printf("Sum: ");
    print(c);
    printf("\n");

    subtract(a, b, c);
    printf("Difference: ");
    print(c);
    printf("\n");

    return 0;
}
