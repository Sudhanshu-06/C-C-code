/*5. Generating the Fibonacci Series
Difficulty: Easy
Topics: Basic Programming, Sequences
Description: Write a program to generate the Fibonacci series up to a given number.
Example:
Input: limit = 10
Output: [0, 1, 1, 2, 3, 5, 8]
Explanation: The Fibonacci series up to 10 is generated as [0, 1, 1, 2, 3, 5, 8].
*/
#include<iostream>
using namespace std;
int main(){
    int limit;
    cout<<"Enter the number of limtimes";
    cin>>limit;
    int t1=0, t2=1, nexterm=0;
    nexterm=t1+t2;
    while(nexterm<=limit){
        cout<<nexterm<<" ";
        t1=t2;
        t2=nexterm;
        nexterm=t1+t2;

    }
}

