//Problem Description: Plus One 
//leetcode link: https://leetcode.com/problems/plus-one/ (problem No. 66)
#include<iostream>
#include<vector>
using namespace std;



class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            digits[i] =0;

        }

        digits.insert(digits.begin(),1);
        return digits;
    }
};


int main(){
    Solution s;
    vector<int> digits = {1, 9,9};
    vector<int> result = s.plusOne(digits);
    cout<<"The result after adding one is: ";
    for(int i = 0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}


//Time Complexity: O(n) where n is the number of digits in the input vector. In the worst case, we may need to traverse all the digits if they are all 9s.
//Space Complexity: O(1) if we don't consider the space used for the output vector, since we are modifying the input vector in-place.