//Problem Statement:  Minimum Element After Replacement With Digit Sum (Leetcode problem : 3300)
//leetcode link: https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/

#include<iostream>
#include<climits>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minElement(vector<int>& nums) {
        int mn = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            int temp = nums[i];
            int rem = 0, sum =0;
            while(temp>0){
                rem = temp%10;
                sum += rem;
                temp /= 10;                
            }
            mn = min(sum, mn);
        }
        

        return mn;
    }
};


//time complexity :  O(n)
// Space complexity : O(1)