//Problem Description: Add Two Numbers
//leetcode link : https://leetcode.com/problems/add-two-numbers/description/   (Problem no. 02)


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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1 = l1;
        ListNode* t2 = l2;
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        int carry = 0, sum = 0;

        while(t1 != NULL || t2 != NULL){
            sum = carry;
            if(t1) sum = sum+ t1->val;
            if(t2) sum = sum+ t2->val;

            ListNode* newnode = new ListNode(sum%10);
            carry = sum/10;


            curr->next = newnode;
            curr = curr->next;

            if(t1) t1 = t1->next;
            if(t2) t2 = t2->next;
        }

        if(carry){
           ListNode* newnode = new ListNode(carry);
           curr->next = newnode;
           curr = curr->next;
        }

        return dummy->next;
        
    }
};

// Create linked list
ListNode* createList(int arr[], int n){
    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;

    for(int i = 1; i < n; i++){
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }
    return head;
}

// Print linked list
void printList(ListNode* head){
    while(head){
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}


int main(){
    int arr1[] = {2,4,3};
    int arr2[] = {5,6,4};

    ListNode* l1 = createList(arr1, 3);
    ListNode* l2 = createList(arr2, 3);

    Solution obj;
    ListNode* result = obj.addTwoNumbers(l1, l2);

    printList(result);

    return 0;
}