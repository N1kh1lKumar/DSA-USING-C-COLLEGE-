//Problem Description: Squares of a Sorted Array
//leetcode link: https://leetcode.com/problems/squares-of-a-sorted-array/ (problem No. 977)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result;
        for(int i = 0; i<nums.size();i++){
            result.push_back(nums[i]*nums[i]);
        }

        sort(result.begin(), result.end());
        return vector<int>(result.begin(), result.end());
        
    }
};

int main()
{
    Solution s;
    vector<int> nums = {-4,-1,0,3,10};
    vector<int> result = s.sortedSquares(nums);
    cout<<"The squares of the sorted array is: ";
    for(int i = 0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}



//Time Complexity: O(n log n) where n is the length of the input vector nums, as we are sorting the result vector which contains the squares of the elements in nums.
//Space Complexity: O(n) where n is the length of the input vector nums, as we are using a result vector to store the squares of the elements in nums. 