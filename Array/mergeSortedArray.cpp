//Problem Description: Merge Sorted Array
//leetcode link: https://leetcode.com/problems/merge-sorted-array/ (problem No. 88)

#include<iostream>
#include<vector>
using namespace std;



class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
        for(int i = m; i < (m+n); i++){
            if(nums1[i]==0){
                nums1[i] = nums2[j];
                j++;
            }
            else if(nums2[j]==0){
                j++;
                
            }
            else{
                nums1[i] = nums2[j];
                j++;
            }
            
        }

        int i = 0;
        while( i < (m+n)){
            for(int j = 0; j<(m+n)-1; j++){
                if(nums1[j] > nums1[j+1]){
                    swap(nums1[j],nums1[j+1]);
                }
            }
            i++;
        }


        for(int i = 0; i<(m+n)-1; i++){
            if(nums1[i] > nums1[i+1]){
                swap(nums1[i], nums1[i+1]);
            }
        }

        
    }
};



int main(){
    Solution s;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3;
    int n = 3;
    s.merge(nums1, m, nums2, n);
    cout<<"The merged array is: ";
    for(int i = 0; i<(m+n); i++){
        cout<<nums1[i]<<" ";
    }
    cout<<endl;
    return 0;
}


//Time Complexity: O((m+n)^2) due to the nested loops for sorting the merged array. The first loop runs m+n times, and the inner loop also runs m+n times in the worst case, leading to O((m+n)^2) time complexity.
//Space Complexity: O(1) since we are modifying nums1 in-place and not using any additional data structures that grow with the input size.