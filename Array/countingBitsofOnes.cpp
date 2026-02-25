//Problem Description: Counting Bits of Ones 
//leetcode link: https://leetcode.com/problems/counting-bits/ (problem No. 338) 

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {

     vector<int> output(n+1);
        for (int i = 0; i <= n; i++) {
            int count = 0;
            int num = i;

            while (num > 0) {
                count += num & 1;
                num >>= 1;
            }
            output[i] = count;
        }

        return output;
    }
};


int main(){
    Solution s;
    int n ;
    cout<<"Enter a non-negative integer n: ";
    cin>>n;
    vector<int> result = s.countBits(n);
    cout<<"The count of bits of ones for numbers from 0 to "<<n<<" is: ";
    for(int i = 0; i <= n; i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}


//Time Complexity: O(n log n) because for each number from 0 to n, we count the number of set bits, which takes O(log n) time in the worst case.
//Space Complexity: O(n) for the output vector that stores the count of bits of ones for each number from 0 to n.