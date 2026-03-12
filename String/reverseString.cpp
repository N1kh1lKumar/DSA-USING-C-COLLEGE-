//Problrem Description: Reverse a string. The input string is given as an array of characters char[].
//leetcode link: https://leetcode.com/problems/reverse-string/ (problem number: 344)


#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int j = s.size() - 1;
        int i = 0;
        while (i < j)
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
};

int main()
{
    Solution S;
    vector<char> s;
    cout << "Enter the string: ";
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        s.push_back(str[i]);
    }
    S.reverseString(s);
    cout << "Reversed string: ";
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }

    return 0;
}