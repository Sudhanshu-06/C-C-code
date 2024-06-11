#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter two no");
    scanf("%d %d",&a,&b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf(" a=%d b=%d ",a,b);
}