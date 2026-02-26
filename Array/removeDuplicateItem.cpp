//Problem Description:(leetcode 26)
//to remove duplicates from sorted array in place and retrun the new array of unique elements and its size

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if(nums.empty()) return 0;
        int i = 0;
        for(int j = 1; j < nums.size(); j++) {
            if(nums[i] != nums[j]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;//return the new array size

    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};
    int newSize = sol.removeDuplicates(nums);
    cout << "The new size of the array with unique elements is: " << newSize << endl;
    cout << "The unique elements are: ";
    for(int i = 0; i < newSize; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}




/*
In this code, we define a class Solution with a method removeDuplicates that takes a reference to a vector of integers as input.
The method first checks if the input vector is empty and returns 0 if it is.
It then initializes a pointer i to keep track of the position of the last unique element found.
The method iterates through the vector using another pointer j, starting from the second element.
If the current element at j is different from the element at i, it means we have found a new unique element.
We increment i and update the element at i to be the current element at j.
After the loop, we return i + 1, which represents the new size of the array containing only unique elements.
The original vector nums will be modified in place to contain the unique elements at the beginning of the vector, and the rest of the elements will be ignored. 
The time complexity of this algorithm is O(n) and the space complexity is O(1) since we are modifying the input vector in place without using any additional data structures.


*/