/*2.Checking for Prime Numbers
Difficulty: Easy
Topics: Basic Programming, Number Theory
Description: Write a program to determine if a number is prime.
Example:
Input: number = 7
Output: Prime
Explanation: 7 has no divisors other than 1 and itself, so it is a prime number.
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    if (num <= 1)
    {
        cout << "Number is not a prime";
        return 0;
    }
    bool isPrime = true;
    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }
        if (isPrime){
            cout << "Number is prime" << endl;
        }else{
            cout << "Number is not a prime no" << endl;
        }
        return 0;

}
