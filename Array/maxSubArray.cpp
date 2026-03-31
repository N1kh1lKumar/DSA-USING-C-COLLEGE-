//problrm description : Given an integer array nums, find the subarray with the largest sum, and return its sum  
// leetcode link : https://leetcode.com/problems/maximum-subarray/
//using Kadane's algo 
#include<iostream>
#include<vector>
#include <climits>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = INT_MIN, curr = 0;
        for(int val : nums){
            curr += val;
            maxsum = max(maxsum, curr);
            if(curr <0) curr = 0;
        }
        return maxsum;}
};

int main(){
    Solution s1;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int sum =  s1.maxSubArray(nums);
    cout << sum << endl;
    return 0;
}