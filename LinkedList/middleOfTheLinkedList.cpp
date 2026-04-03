//Problem Description : givenn the head of a singly linked list, return the middle node of the linked list. If there are two middle nodes, return the second middle node.
//leetcode link: https://leetcode.com/problems/middle-of-the-linked-list/description/    (problem no. 876)

#include<bits/stdc++.h>
using namespace std;



struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* t1  = head;
        ListNode* t2 = head;

        while(t2 != NULL && t2->next != NULL){
            t1 = t1->next;
            t2= t2->next->next;
        }
        return t1;
    }
};


ListNode* convertArr( vector<int>& vec){
        ListNode* head = new ListNode(vec[0]);
        ListNode* mover = head;

        for(int i= 1; i<vec.size() ; i++){
            ListNode* newNode = new ListNode(vec[i]);
            mover->next = newNode;
            mover = mover->next;
        }
        return head; 
     }

void print(ListNode* head){
    ListNode* temp = head;
    while(temp != NULL){
        cout << temp->val << " " ;
        temp = temp->next;
    }
    cout << endl;
}




int main(){
    Solution s;
    vector<int> arr = {1,2,3,4,5,3,3,5};
    ListNode* head = convertArr(arr);
    print(head);

    head = s.middleNode(head);
    print(head);

   return 0;
}