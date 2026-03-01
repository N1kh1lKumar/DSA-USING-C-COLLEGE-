//Problem Description: Single Element in an Array
//leetcode link: https://leetcode.com/problems/single-number/ (problem No. 136


#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num;
        }
        return result;
    }
};


int main() {
    Solution s;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int singleElement = s.singleNumber(nums);
    cout << "The single element in the array is: " << singleElement << endl;

    return 0;
}



//Time Complexity: O(n) because we traverse the array once to find the single element.
//Space Complexity: O(1) because we use only a constant amount of extra space to
//in this solution, we use the XOR operator to find the single element in the array.
// The XOR operation has a property that it cancels out pairs of identical numbers, leaving only the single number that appears once. 
//Therefore, we can find the single element in linear time and constant space.