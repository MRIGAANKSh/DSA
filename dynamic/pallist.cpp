// Palindrome Linked List
// Difficulty: MediumAccuracy: 41.48%Submissions: 351K+Points: 4Average Time: 20m
// Given a head singly linked list of positive integers. The task is to check if the given linked list is palindrome or not.

// Examples:

// Input: head: 1 -> 2 -> 1 -> 1 -> 2 -> 1
// Output: true
// Explanation: The given linked list is 1 -> 2 -> 1 -> 1 -> 2 -> 1 , which is a palindrome and Hence, the output is true.

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Solution {
  public:
    bool isPalindrome(Node *head) {
        if (!head || !head->next) return true; // Edge case for empty or single node list
        
        stack<int> s;
        Node *slow = head, *fast = head;
        
        // Step 1: Push first half elements onto stack
        while (fast && fast->next) {
            s.push(slow->data);
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // Step 2: If the list has odd number of elements, skip the middle one
        if (fast != NULL) {
            slow = slow->next;
        }
        
        // Step 3: Compare the second half with stack elements
        while (slow) {
            if (s.top() != slow->data) {
                return false; // Not a palindrome
            }
            s.pop();
            slow = slow->next;
        }
        
        return true;
    }
};
