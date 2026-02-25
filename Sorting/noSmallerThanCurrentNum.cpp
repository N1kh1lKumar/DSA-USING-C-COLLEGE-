//Problem Description: How Many Numbers Are Smaller Than the Current Number
//leetcode link: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/ (problem No. 1365)
#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        for(int i=0; i< nums.size(); i++){
            int count=0;
            for(int j=0; j<nums.size(); j++){
                if(nums[i]>nums[j]){
                    count +=1;
                }
            }
            result.push_back(count);
        }
        return vector<int>(result.begin(),result.end());
    }
};

int main(){
    Solution s;
    vector<int> nums = {8,1,2,2,3};
    vector<int> result = s.smallerNumbersThanCurrent(nums);
    cout<<"The count of numbers smaller than the current number is: ";
    for(int i = 0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}


//Time complexity: O(n^2) where n is the length of the input vector nums, as we are using two nested loops to compare each element with every other element in the vector.
//Space complexity: O(n) where n is the length of the input vector nums, as we are using a result vector to store the count of numbers smaller than the current number for each element in the input vector.
