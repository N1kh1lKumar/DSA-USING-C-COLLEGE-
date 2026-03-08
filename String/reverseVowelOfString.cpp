//problem Description :reverse the vowel in a string
//leetcode link : https://leetcode.com/problems/reverse-vowels-of-a-string/  (problem 345)
#include<iostream>
using namespace std;


class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size()-1;
        while(i<j){
            if(isVowel(s[i]) && isVowel(s[j])){
                swap(s[i], s[j]);
                i++; j--;
            }
            else if(!(isVowel(s[i]))){
                i++;
            }
            else{
                j--;
            }
        }

        return s;
        
    }


     bool isVowel(char c){ 
        char ch = c;
            return (ch== 'a' ||ch== 'e' ||ch== 'i' ||ch=='o' ||ch== 'u' ||ch== 'A' ||ch=='E' ||ch=='I' || ch=='O' ||ch=='U');
            }
};


int main(){
    Solution s;
    string str;
    cout << "Enter the string: ";
    cin >> str;
    cout << s.reverseVowels(str);
    
    return 0;
}



//Time Complexity: O(n)
//Space Complexity: O(1)