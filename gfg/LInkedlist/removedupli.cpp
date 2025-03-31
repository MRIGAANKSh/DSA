// Remove duplicates from an unsorted linked list
// Difficulty: EasyAccuracy: 45.95%Submissions: 242K+Points: 2Average Time: 20m
// Given an unsorted linked list. The task is to remove duplicate elements from this unsorted Linked List. When a value appears in multiple nodes, the node which appeared first should be kept, all other duplicates are to be removed.

// Examples:

// Input: LinkedList: 5->2->2->4
// Output: 5->2->4
// Explanation: Given linked list elements are 5->2->2->4, in which 2 is repeated only. So, we will delete the extra repeated elements 2 from the linked list and the resultant linked list will contain 5->2->4

#include <bits/stdc++.h>
using namespace std;

// Linked list Node structure
struct Node {
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    Node *removeDuplicates(Node *head) {
        if (!head) return NULL; // Handle empty list

        unordered_set<int> seen; // HashSet to store unique values
        Node* curr = head;
        Node* prev = NULL;

        while (curr) {
            if (seen.find(curr->data) != seen.end()) { // If duplicate found
                prev->next = curr->next; // Remove duplicate node
                delete curr; // Free memory
            } else {
                seen.insert(curr->data); // Insert into HashSet
                prev = curr;
            }
            curr = prev->next; // Move to next node
        }
        return head;
    }
};

// Function to print a linked list
void printList(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Function to create a linked list from an array
Node* createLinkedList(vector<int> arr) {
    Node* dummy = new Node(0);
    Node* curr = dummy;
    for (int val : arr) {
        curr->next = new Node(val);
        curr = curr->next;
    }
    return dummy->next;
}

// Driver Code
int main() {
    vector<int> values = {5, 2, 2, 4}; // Example input
    Node* head = createLinkedList(values);

    Solution ob;
    head = ob.removeDuplicates(head);

    printList(head); // Expected Output: 5 -> 2 -> 4 -> NULL
    return 0;
}
