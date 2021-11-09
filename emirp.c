#include <stdio.h>

int prime(int n);
int reverse(int x);
int palindrome(int y);

void main()
{
    char e;
    int n, i, temp_1, temp_2, new, new_2;
    printf("Enter a Number to check if it's EMIRP PRIME or Not\n");
    while (!scanf("%d", &n))
    {
        printf("Invalid input. Please enter an integer value\a\n");
        while ((e = getchar()) != '\n')
            ;
    }
    if (palindrome(n) == 0 && n > 9)
    {
        temp_1 = n;
        new = prime(n);
        if (new != 0)
        {
            temp_2 = reverse(temp_1);
            new_2 = prime(temp_2);

            if (new == new_2)
            {
                printf("Given Number %d is an EMIRP PRIME \n", temp_1);
            }
            else
            {
                printf("Not an EMIRP Prime Number\n");
            }
        }
        else
            printf("The Entered Number is a Composite Number\n");
    }
    else
    {
        printf("Enter a Valid Positive Integer\n");
    }
}

int prime(int n)
{
    int flag = 0;
    if (n == 1)
    {
        printf("1 is Neither Prime nor Composite\n");
    }
    else if (n > 1)
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            return 1;
        }
        else if (flag == 1)
        {

            return 0;
        }
    }
}

int reverse(int x)
{
    int remainder, rev = 0;
    while (x != 0)
    {
        remainder = x % 10;
        rev = rev * 10 + remainder;
        x = x / 10;
    }
    return rev;
}

int palindrome(int y)
{

    int temp, rev;
    temp = y;
    rev = reverse(y);
    if (y >= 2 && y < 9)
    {
        printf("1-Digit Numbers are Not EMIRP primes\n");
    }
    else if (rev == temp)
    {
        printf("It is a Palindrome and Palindromes are Not EMIRP primes\n");
        return 404;
    }
    else
        return 0;
}
