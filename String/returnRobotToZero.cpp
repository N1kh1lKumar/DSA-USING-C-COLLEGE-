//Problem Description: Return the robot to the origin (0, 0) after it moves according to a given sequence of moves.
// leetcode: https://leetcode.com/problems/robot-return-to-origin/ (problem No. 657)

#include<iostream>
using namespace std;

class Solution {
public:    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        for (int i=0; i < moves.size(); i++) {
            if (moves[i] == 'U') y++;
            else if (moves[i] == 'D') y--;
            else if (moves[i] == 'L') x--;
            else if (moves[i] == 'R') x++;
        }
        return x == 0 && y == 0;
    }
};

int main() {
    Solution robot;
    string moves;
    cout << "Enter the sequence of moves (U, D, L, R): ";
    cin >> moves;
    bool result = robot.judgeCircle(moves);
    cout << "Does the robot return to the origin? " << (result ? "Yes" : "No") << endl; 
    return 0;
}