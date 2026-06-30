#include <stdio.h>
int reverse_number(int num)
{
    int reverse=0;
    while(num!=0)
    {
        reverse=reverse*10+num%10;
        num=num/10;
    }
    return reverse;

}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int reversed_num = reverse_number(num);
    printf("Reversed number: %d", reversed_num);

    return 0;
}