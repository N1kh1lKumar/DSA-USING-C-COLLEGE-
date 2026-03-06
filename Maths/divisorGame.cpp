//Problem Description: Alice and Bob take turns playing a game, with Alice starting first.
// Initially, there is a number n on the chalkboard. On each player's turn, that player makes a move consisting of:

//leetcode link: https://leetcode.com/problems/divisor-game/  (problem 1025)

#include <iostream>
using namespace std;


class Solution {
public:
    bool divisorGame(int n) {
        
    if(n%2!=0){
        return false;
    }
    else{
        return true;
    }
        
    }
};

int main(){
    Solution s;
    int n ;
    cout << "Enter the number n: ";
    cin >> n;
    cout<<s.divisorGame(n);
}


//Time Complexity: O(1)
//Space Complexity: O(1)