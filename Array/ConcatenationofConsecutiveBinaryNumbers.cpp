//Problem Description: Given an integer n, return the decimal value of the binary string formed by concatenating the binary representations of 1 to n in order, modulo 109 + 7.
//leetcode link: https://leetcode.com/problems/concatenation-of-consecutive-binary-numbers/  (problem 1680)


#include <iostream>
using namespace std;

class Solution {
public:
    int concatenatedBinary(int n) {
        const int MOD = 1e9 + 7;
        long long result = 0;
        int bitLength = 0;

        for (int i = 1; i <= n; i++) { 
            if ((i & (i - 1)) == 0) {
                bitLength++;
            }

            result = ((result << bitLength) | i) % MOD;
        }

        return result
        ;
    }
};

int main(){
    Solution s;
    int n ;
    cout << "Enter the number n: ";
    cin >> n;
    cout<<s.concatenatedBinary(n);
}



//Time Complexity: O(n)
//Space Complexity: O(1)
