/* 4.Calculating Armstrong Numbers
Difficulty: Easy
Topics: Basic Programming, Number Theory
Description: Write a program to check if a number is an Armstrong number.
Example:
Input: number = 153
Output: Armstrong Number
Explanation: 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.
*/
#include <iostream>
using namespace std;
int main(){
    int num,rem,temp,result=0;
    cout<<"Enter the number";
    cin>>num;
    temp=num;

    while(temp!=0){
        rem=temp%10;
        result=result+rem*rem*rem;
        temp=temp/10;
    }
    if(num==result){
        cout<<num <<" Number is an Armstrong number";
    }else{
        cout<<num <<" Number is not an Armstrong number";
    }
}