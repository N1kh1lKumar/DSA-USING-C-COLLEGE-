//Problem Description:
// Binary Search is a search algorithm that finds the position of a target value within a sorted array.


#include<iostream>
#include<vector>
using namespace std;

class BinarySearch{ 
public: 
    int binarySearch(vector<int>& arr, int target) { 
        int left = 0, right = arr.size() - 1; 
        while (left <= right) { 
            int mid = left + (right - left) / 2; 
            if (arr[mid] == target) { 
                return mid; // Target found at index mid
            } else if (arr[mid] < target) { 
                left = mid + 1; // Search in the right half
            } else { 
                right = mid - 1; // Search in the left half
            } 
        } 
        return -1; // Target not found in the array
    } 
};


int main() { 
    BinarySearch bs; 
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    int target = 5; 
    int result = bs.binarySearch(arr, target); 
    if (result != -1) { 
        cout << "Element found at index: " << result << endl; 
    } else { 
        cout << "Element not found in the array." << endl; 
    } 
    return 0; 
}





/*
In this code, we define a class BinarySearch with a method binarySearch that takes a reference to a vector of integers and a target integer as input.
The method initializes two pointers, left and right, to represent the current search range within the array.
It uses a while loop to continue searching as long as left is less than or equal to right.
Inside the loop, it calculates the middle index mid and checks if the element at mid is equal to the target. If it is, it returns the index mid.
If the element at mid is less than the target, it means the target must be in the right half of the array, so it updates left to mid + 1.
If the element at mid is greater than the target, it means the target must be in the left half of the array, so it updates right to mid - 1.
If the loop ends without finding the target, it returns -1 to indicate that the target is not present in the array.
The time complexity of this algorithm is O(log n) and the space complexity is O(1) since we are using only a constant amount of extra space for the pointers and the mid variable.  

*/