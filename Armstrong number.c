#include<stdio.h>
int main()
{
    int num, count=0, temp;
    printf("Enter a number : ");
    scanf("%d" , &num);
    temp= num;
    while(temp!=0)
    {
     count++;
     temp=temp/10;
    }

    printf("The total digits in this number %d is %d\n", num, count);

    return 0;
}
