#include<stdio.h>
#include<conio.h>
int main(){
    int x=243;
    int rem=0,sum=0;
    rem=x%10;
    x=x/10;
    sum=sum+rem;
    rem=x%10;
    x=x/10;
    sum=sum+rem;
    rem=x%10;
    x=x/10;
    sum=sum+rem;
    printf("%d",sum);
    return 0;
}