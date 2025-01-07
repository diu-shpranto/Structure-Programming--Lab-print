#include<stdio.h>
int main()
{
    int num, sum=0, rem, temp;
    printf("Enter a number : ");
    scanf("%d" , &num);
    sum= 0;
    temp= num;
    while(temp!=0)
    {
     rem=temp%10;
     sum=sum*10+rem;
     temp=temp/10;
    }
    if(sum==num)
    {
        printf("%d is a palindrome number", num);
    }
    else
    {
        printf("%d is not a palindrome number", num);
    }
    return 0;
}
