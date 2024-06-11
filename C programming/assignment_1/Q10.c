#include<stdio.h>
int main(){
    int date,month,year;
    printf("Enter date in DD/MM/YYYY format:");
    scanf("%d/%d/%d",&date,&month,&year);
    printf("date-%d month-%d year-%d",date,month,year);
    return 0;
}