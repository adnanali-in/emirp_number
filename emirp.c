#include <stdio.h>

int prime(int n);
int reverse(int x);
void main()
{
    int n, temp_1, i, temp_2, new, new_2;
    printf("Enter a Number to check if it's Emirp or Not\n");
    scanf("%d", &n);
    temp_1=n;
    printf("Value of new is %d\n",temp_1);
    new=prime(n);
    if (new != 0)
    {
        temp_2 = reverse(temp_1);
        printf("Value of New 2 is %d",temp_2);
        new_2=prime(temp_2);

        if(new==new_2){
            printf("Given Number %d is A EMIRP and opposite is %d \n",temp_1,temp_2);
        }
    
    }
}

int prime(int n)
{
    int flag = 0, temp;
    temp = n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            printf("%d\n", flag);
            break;
        }
    }
    if (flag != 1)
    {
        printf("It is Prime\n");
        return 1;
    }
    else if (flag == 0)
    {
        printf("Its not Prime\n");
        return 0;
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
    printf("Reverse is %d\n",rev);
    return rev;
}
