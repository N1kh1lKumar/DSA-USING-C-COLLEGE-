//Problem Description: Intersection of Two Arrays
//leetcode link: https://leetcode.com/problems/intersection-of-two-arrays/ (problem No. 349)
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(), nums1.end());
        unordered_set<int> result;

        for (int x : nums2) {
            if (s.count(x)) result.insert(x);
        }

       

        return vector<int>(result.begin(), result.end());
    }
};


int main(){
    Solution s;
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> result = s.intersection(nums1, nums2);
    cout<<"The intersection of the two arrays is: ";
    for(int i = 0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}



//Time complexity: O(n + m) where n and m are the lengths of nums1 and nums2 respectively.
//Space complexity: O(n) where n is the length of nums1, as we are using an unordered set to store the elements of nums1. 
//The space complexity of the result vector is O(k) where k is the number of unique elements in the intersection of nums1 and nums2