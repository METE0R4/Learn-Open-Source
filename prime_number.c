#include <stdio.h>
void isprime(int n)
{
    int isprime=1;
    if (n<=1)
    {
        isprime=0;
    }
    else
    {
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                isprime=0;
                break;
            }
        }
    }
    if(isprime)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    isprime(num);
    return 0;
}