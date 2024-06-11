#include<stdio.h>
#include<conio.h>
int main()
{
    int x=9;
    int result=x&1;
    if(result==1){
        printf("odd");
    }
    else{
        printf("even");
    }
}