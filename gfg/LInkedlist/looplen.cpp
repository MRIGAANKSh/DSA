class Solution {
    public:
      // Function to find the length of a loop in the linked list.
      int countNodesinLoop(Node *head) {
          Node* slow = head;
          Node* fast = head;
  
          while (fast && fast->next) {
              fast = fast->next->next;
              slow = slow->next;
              
              // Loop detected
              if (slow == fast) {
                  return countLoopLength(slow);
              }
          }
          return 0; // No loop
      }
  
      int countLoopLength(Node* node) {
          int count = 1;
          Node* temp = node->next;
          
          while (temp != node) {
              count++;
              temp = temp->next;
          }
          
          return count;
      }
  };
  