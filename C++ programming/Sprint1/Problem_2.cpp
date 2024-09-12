#include <iostream>
using namespace std;

int main(){

    int num,rem,result=0;
    cout<<"Enter the number";
    cin>>num;
    while(num!=0){
        rem=num%10;
        result=result+rem*rem*rem;
        num=num/10;
    }
    if(num==result){
        cout<<num<<"Number is an Armstrong number";
    }else{
        cout<<num<<"Number is not an Armstrong number";
    }
}
