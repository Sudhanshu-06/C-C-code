/*9. Summing Digits of a Number
Difficulty: Easy
Topics: Basic Programming, Mathematical Computations
Description: Write a program to calculate the sum of digits of a number.
Example:
Input: number = 1234
Output: 10
Explanation: The sum of the digits 1 + 2 + 3 + 4 = 10.
*/
#include<iostream>
using namespace std;
int main(){
    int number,sum=0;
    cout<<"Enter a number: ";
    cin>>number;
    while(number>0){
        sum=sum+number%10;
        number=number/10;
    }
    cout<<"Sum of digits: "<<sum<<endl;
    return 0;
}