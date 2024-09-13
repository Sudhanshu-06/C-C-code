/*Problem 2: Print a Square of Stars
Difficulty: Easy
Topics: Pattern Printing
Hint: Print a square pattern of stars (*). Each row and column should have the same number of stars.

Example 1: Input: n = 5
Output:

*****
*****
*****
*****
*****
*/

#include <iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter the number";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

