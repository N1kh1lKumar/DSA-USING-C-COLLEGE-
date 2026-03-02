//Problem Descriptio: fing the missing number in an array of n-1 numbers from 1 to n
// leetcode link: https://leetcode.com/problems/missing-number/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expected = ((n*(n+1))/2);
        int sum = 0;
        for(int i = 0; i<nums.size(); i++){
            sum = sum + nums[i];
        }

        return expected - sum;
        
    }
};

int main(){
    Solution s;
    vector<int> nums = {3,0,1};
    cout<<s.missingNumber(nums);
}