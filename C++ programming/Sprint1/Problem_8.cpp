/* 8. Finding the Factorial of a Number
Difficulty: Easy
Topics: Basic Programming, Mathematical Computations
Description: Write a program to compute the factorial of a given number.
Example:
Input: number = 5
Output: 120
Explanation: 5! (factorial) is 5 × 4 × 3 × 2 × 1 = 120.
*/
#include<iostream>
using namespace std;
int main(){
    int n; 
    int result=1;
    cout<<"Enter a number: ";  
    cin>>n;
    for(int i=1; i<=n; i++){
        result=result*i;
        
    }
    cout<<result;
    return 0;
}