//problem Description :reverse the only letters in a string
//leetcode link : https://leetcode.com/problems/reverse-only-letters/  (problem 917)

#include<iostream>
using namespace std;
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i = 0;
        int j = s.size()-1;

        while(i<j)
        {
            if(isalpha(s[i]) && isalpha(s[j])){
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else if(!(isalpha(s[i]))){
                i++;
            }
            else{
                j--;
            }

        }

        return s;
    }
};

int main(){
    Solution s;
    string str;
    cout << "Enter the string: ";
    cin >> str;
    cout << s.reverseOnlyLetters(str);
    
    return 0;
}