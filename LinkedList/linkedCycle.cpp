//Problem Description : Linked List Cycle
//Problem Link : https://leetcode.com/problems/linked-list-cycle/description/(Problem no. 141)

#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL){
            return false;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                return true;
            }
        }
        return false;
    }
};

int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = head; // Creating a cycle

    Solution sol;
    if(sol.hasCycle(head)){
        cout << "Cycle detected in the linked list." << endl;
    } else {
        cout << "No cycle detected in the linked list." << endl;
    }

    return 0;
}