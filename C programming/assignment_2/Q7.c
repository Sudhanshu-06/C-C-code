#include<stdio.h>
#include<conio.h>
int main(){
    int x=6;
    int count=0;
    int result=0;
    // result= x&1;
    // count++;
    // if(result==1)
    // {
    //      printf("%d",count);
    // }
    // x=x>>1;
    // result= x&1;
    // count++;
    // if(result==1)
    // {
    //      printf("%d",count);
    // }
    // x=x>>1;
    while(x!=0){
        result=x&1;
        count++;
        if(result==1){
            printf("%d",count);
            break;
        }
        x=x>>1;
    }
   
}