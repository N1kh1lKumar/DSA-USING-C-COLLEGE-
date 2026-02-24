//problrem Description: Is s is a subsequence of t?
//leetcode link: https://leetcode.com/problems/is-subsequence/description/ (problem no. 392)

#include<iostream>
using namespace std;

class solution{
    public:
    bool issubsequence(string s, string t){
        int i=0;
        int j=0;

        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                i++;
                j++;
            }else{
                j++;
            }
        }
        return i==s.size();
    }
};

int main(){
    string s,t;
    cout<<"Enter the string s: ";
    cin>>s;
    cout<<"Enter the string t: ";
    cin>>t;
    solution obj;
    if(obj.issubsequence(s,t)){
        cout<<"True"<<endl;
        }
        else{
            cout<<"False"<<endl;
        }
    
    return 0;
}


//Time complexity: O(n) where n is the length of string t
//Space complexity: O(1) as we are using constant space to store the variables i and j.