//Program to check whether given number is palindrome or not
#include <stdio.h>
int main()
{
    int a, b, c, d = 0;
    printf("Enter your number\n");
    scanf("%d", &a);
    b = a;
    while (a > 0)
    {
        c = a % 10;
        d = (d * 10) + c;
        a = a / 10;
    }
    {
        if (b == d)
        {
            printf("The number you gave is palindrome");
        }
        else
        {
            printf("The number you gave is not palindrome");
        }
    }
    return 0;
}