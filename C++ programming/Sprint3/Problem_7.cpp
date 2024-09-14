/*Problem 7: Print an Inverted Triangle Pattern
Difficulty: Easy
Topics: Pattern Printing
Hint: Print an inverted triangle pattern with stars (*). Each row should contain decreasing numbers of stars from the top row.

Example 1: Input: n = 5
Output:

*****
 ****
  ***
   **
    *
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of row to print";
    cin>>n;
    for(int i=n; i>=1; i--){
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        for(int k=0; k<i; k++ ){
            cout<<"*";
        }
        cout<<endl;

    }
}