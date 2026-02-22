//problem Description: Given a positive integer, check whether it has alternating bits: namely, if two adjacent bits will always have different values.
//leetcode: https://leetcode.com/problems/binary-number-with-alternating-bits/ (problem No. 693)


#include <iostream>
using namespace std;

class Solution {
public:
    bool hasAlternatingBits(int n) {

        int binary[32], i = 0;
       
         while (n > 0) 
        {
            binary[i] = n % 2;
            n = n / 2;
            i++;
        }

        for (int j = i - 1; j > 0; j--) 
        {
            if (binary[j] == binary[j - 1]) 
            {
                return false;
            }
           
        }
         return true;
    }
   
};

int main(){
    Solution num;
    cout << "Enter a positive integer: ";
    int n;
    cin >> n;
    if (num.hasAlternatingBits(n)) {
        cout << n << " has alternating bits." << endl;
    } else {
        cout << n << " does not have alternating bits." << endl;
    }

    return 0;
}