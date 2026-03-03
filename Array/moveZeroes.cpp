//Problem Descriptoion: Move zeros to the end of array
// leetcode link: https://leetcode.com/problems/move-zeroes/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int j=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[i],nums[j++]);
            }
        }
    }
};


int main(){
    Solution s;
    vector<int> nums = {0,1,0,3,12};
    s.moveZeroes(nums);
    for(int i: nums){
        cout<<i<<" ";
    }
}

//Time Complexity: O(n)
//Space Complexity: O(1)