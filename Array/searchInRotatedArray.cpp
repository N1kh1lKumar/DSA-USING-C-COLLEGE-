//Problrem Description : There is an integer array nums sorted in ascending order (with distinct values).
//Problrem link : https://leetcode.com/problems/search-in-rotated-sorted-array/description/ (Problem no. 33)
#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0, end = nums.size()-1;
        while(st <= end){
            int mid = st +(end - st)/2;
            if(nums[mid]== target)  return mid;
            if(nums[st] <= nums[mid]){
                if(target < nums[mid] && target >= nums[st]){
                    end = mid-1;
                }else{
                    st = mid+1;
                }

            }else{
                if(target <= nums[end] && target > nums[mid]){
                    st = mid+1;
                }else{
                    end = mid-1;
                }

            }
        }
        return -1;
    }
};

int main(){
    Solution S1;
    int ans, target = 0;
    vector<int> nums = {4,5,6,7,0,1,2};
    ans = S1.search(nums,target);
    cout << "target present at index : " <<ans << endl;

    return 0;

}