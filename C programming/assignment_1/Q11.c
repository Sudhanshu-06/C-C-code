#include<stdio.h>
int main(){
    int hour,min;
    printf("Enter the time in HH:MM format");
    scanf("%d:%d",&hour,&min);
    printf("%d hours and %d min-%d",hour,min);
    return 0;
}