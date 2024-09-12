/*7. Crafting Star Patterns
Difficulty: Easy
Topics: Basic Programming, Patterns
Description: Write a program to create different star patterns (e.g., pyramid, diamond).
Example:
Input: patternType = "pyramid", height = 5
Output:

    *
   ***
  *****
 *******
*********
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of pyramid patterns";
    cin>>n;
        for(int i=0; i<=n; i++){
        for(int j=i; j<n; j++){
            cout << " " ;
        }
        for(int k=1; k<=(2*i-1); k++){
            cout<<"*" ;
        }
        cout << endl;

    }
}