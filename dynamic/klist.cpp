// Kth from End of Linked List
// Difficulty: EasyAccuracy: 41.18%Submissions: 408K+Points: 2Average Time: 30m
// Given the head of a linked list and the number k, Your task is to find the kth node from the end. If k is more than the number of nodes, then the output should be -1.

// Examples

// Input: LinkedList: 1->2->3->4->5->6->7->8->9, k = 2
// Output: 8
// Explanation: The given linked list is 1->2->3->4->5->6->7->8->9. The 2nd node from end is 8.


class Solution {
  public:
    int getKthFromLast(Node *head, int k) {
        // Your code here
        vector<int>arr;
        while(head!=NULL){
            arr.push_back(head->data);
            head=head->next;
        }
        if(k>arr.size()){
            return -1;
        }
        else{
            return arr[arr.size()-k];
        }
        
    }
};