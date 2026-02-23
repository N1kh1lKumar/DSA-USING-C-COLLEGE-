//Problem Description: Given an integer array nums and an integer val, remove all occurrences of val in nums in-place.
//Link: https://leetcode.com/problems/remove-element/ (problem No. 27 )

#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k =0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] != val){
                nums[k] = nums[i];
                k++;
           }
        }
        nums.resize(k);
        return k;
    }
};


int main(){
    Solution s;
    vector<int> nums = {3,2,2,3};
    int val = 3;
    int k = s.removeElement(nums, val);
    cout<<"The new length of the array is: "<<k<<endl;
    cout<<"The modified array is: ";
    for(int i = 0; i<k; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}



//Time Complexity: O(n), where n is the number of elements in the input array nums. We traverse the array once to remove the occurrences of val.    