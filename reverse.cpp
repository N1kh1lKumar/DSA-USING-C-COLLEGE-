//problem description
/*
Write a C++ program that takes an integer input from the user and reverses the digits of the number.
 For example, if the user inputs 1234, the program should output 4321.
  The program should handle both positive and negative integers.   
*/ 

#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int rev = 0;
    if(n < 0) {
        n = -n; // Make n positive for reversal
        while (n != 0) {
        rev = rev * 10 + n % 10; // Append the last digit of n to rev
        n /= 10; // Remove the last digit from n
    }
        rev = -rev; // Make rev negative again
    } else {
        while (n != 0) {
        rev = rev * 10 + n % 10; // Append the last digit of n to rev
        n /= 10; // Remove the last digit from n
    }
    
   
    }
     return rev;
}


int main() {
    int n, rev = 0;
    cout << "Enter a number: ";
    cin >> n;
    rev = reverseNumber(n);

    cout << "Reversed number: " << rev << "\n";
    return 0;
}






/*
This is program to reverse the digits of an integer input by the user. 
The program defines a function `reverseNumber` that takes an integer `n` as input and returns the reversed integer.
The function first checks if the input number is negative. If it is, it makes the number positive for reversal and then negates the result at the end.
The reversal is done by repeatedly taking the last digit of `n` (using `n % 10`), appending it to `rev` (by multiplying `rev` by 10 and adding the last digit),
 and then removing the last digit from `n` (using `n /= 10`).   
In the `main` function, the program prompts the user to enter a number, calls the `reverseNumber` function with the input, and then prints the reversed number.
The time complexity of this program is O(d), where d is the number of digits in the input number, and
the space complexity is O(1) since we are using only a constant amount of extra space for the variables.  
*/



