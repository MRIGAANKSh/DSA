/*
Problem Statement:
-----------------
Given K sorted linked lists of different sizes. The task is to merge them in such a way that after merging they will be a single sorted linked list.

Example 1:
---------
Input:
K = 4
value = {{1,2,3},{4 5},{5 6},{7,8}}
Output: 1 2 3 4 5 5 6 7 8
Explanation: The test case has 4 sorted linked list of size 3, 2, 2, 2
              1st    list     1 -> 2-> 3
              2nd   list      4->5
              3rd    list      5->6
              4th    list      7->8
              The merged list will be 1->2->3->4->5->5->6->7->8.
              
Example 2:
----------
Input:
K = 3
value = {{1,3},{4,5,6},{8}}
Output: 1 3 4 5 6 8
Explanation: The test case has 3 sorted linked list of size 2, 3, 1.
              1st list 1 -> 3
              2nd list 4 -> 5 -> 6
              3rd list 8
              The merged list will be 1->3->4->5->6->8.
              
Your Task: The task is to complete the function mergeKList() which merges the K given lists into a sorted one. The printing is done automatically by the driver code.

Expected Time Complexity: O(nk Logk)
Expected Auxiliary Space: O(k)
Note: n is the maximum size of all the k link list
*/

// Link --> https://practice.geeksforgeeks.org/problems/merge-k-sorted-linked-lists/1

// Code:
class Solution
{
  public:
    Node* Merge(Node *a , Node *b)
    {
        Node *result = NULL;
        
        if(a == NULL)
            return b;
        else if(b == NULL)
            return a;
        
        if(a->data <= b->data)
        {
            result = a;
            result->next = Merge(a->next , b);
        }
        else
        {
            result = b;
            result->next = Merge(a , b->next);
        }
        return result;
    }
  
    Node* mergeKLists(Node *a[] , int K)
    {
        int i=0;
        int j;
        int last = K-1;
        
        while(last != 0)
        {
            i = 0;
            j = last;
            while(i < j)
            {
                a[i] = Merge(a[i] , a[j]);
                i++;
                j--;
                if(i >= j)
                    last = j;
            }
        }
        return a[0];
    }
};
