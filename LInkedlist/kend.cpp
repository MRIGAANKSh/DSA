class Solution {
    public:
        // Function to remove duplicates from sorted linked list.
        Node* removeDuplicates(Node* head) {
            if (head == NULL) return head; // Edge case: empty list
    
            Node* temp = head;
            while (temp->next != NULL) { // Ensure temp->next is not NULL
                if (temp->data == temp->next->data) {
                    temp->next = temp->next->next; // Skip the duplicate node
                } else {
                    temp = temp->next; // Move to the next node
                }
            }
            return head; // Return the modified head
        }
    };
    