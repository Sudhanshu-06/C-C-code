/*Problem 1: Print a Right-Angle Triangle of Stars
Difficulty: Easy
Topics: Pattern Printing
Hint: Print a right-angle triangle pattern of stars (*). Each row should contain an increasing number of stars, starting from 1 star in the first row.

Example 1: Input: n = 4
Output:

*
**
***
****
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number"; 
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}