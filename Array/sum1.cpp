// Problem description
/*
 WAP to find the index of two numbers in a sorted array which add up to a target number:
*/


#include<iostream>
using namespace std;


class Solution {
    public:
        void findTwoSum(int arr[], int n, int target){
            int i = 0, j = n - 1;

            while(i < j){
                
                if(arr[i]+arr[j] == target){
                    cout << i << " " << j;
                    break;
                }
                
                else if(arr[i]+arr[j] >target){
                    j--;
                }
                else{
                    i++;
                }
                
            }
        }
};

int main(){
    Solution s;
    int n, target;
    cout << "Enter the size of the array: \n";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: \n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter the target number: \n";
    cin >> target;

    s.findTwoSum(arr, n, target);

    return 0;
}


/* 
    For this we are using two pointer approach, we initialize two pointer i and j, i is initialized to 0 and j is initialized to the last index of the array.
    We run a while loop until i is less than j, inside the while loop we check if the sum of the values at index i and j is equal to the target, 
    if it is then we print the index of i and j and break the loop.
    If the sum is greater than the target, then we decrement the value of j, else we increment the value of i.
    The time complexity of this approach is O(n) and the space complexity is O(1) 
*/