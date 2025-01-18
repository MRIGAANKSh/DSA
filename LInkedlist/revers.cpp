// Reverse a linked list
// Difficulty: EasyAccuracy: 73.11%Submissions: 322K+Points: 2
// Given the head of a linked list, the task is to reverse this list and return the reversed head.

// Examples:

// Input: head: 1 -> 2 -> 3 -> 4 -> NULL
// Output: head: 4 -> 3 -> 2 -> 1 -> NULL
// Explanation:

class Solution {
  public:
    Node* reverseList(struct Node* head) {
        // code here
        Node* prev=NULL;
        Node* curr=head;
        Node* next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
};
