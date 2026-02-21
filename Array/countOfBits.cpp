// Problem Desription: Count the number of 1 bits in the binary representation of a given positive integer.
// leetcode: https://leetcode.com/problems/number-of-1-bits/ (problem No. 191)

#include <iostream>
using namespace std;

class Solution {
public:
    int CountBinary(int n) {
          int count1 = 0;

        for (int i = 0; i <= n; i++) {
           
            int binary[32];
            int k = 0;

            while (n > 0) {
                binary[k++] = n % 2;
                n /= 2;
            }

            

            for (int j = 0; j < k; j++) {
                if (binary[j] == 1)
                    count1++;
            }
        }  
            return count1;
  
    }
};


int main() {
    Solution num;
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    int count = num.CountBinary(n);
    cout << "Number of 1 bits in the binary reprepwdsentation of " << n << " is: " << count << endl;
    return 0;
}