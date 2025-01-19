// Left View of Binary Tree
// Difficulty: EasyAccuracy: 33.74%Submissions: 536K+Points: 2
// You are given the root of a binary tree. Your task is to return the left view of the binary tree. The left view of a binary tree is the set of nodes visible when the tree is viewed from the left side.

// If the tree is empty, return an empty list.

// Examples :

// Input: root[] = [1, 2, 3, 4, 5, N, N]

class Solution {
public:
    vector<int> leftView(Node *root) {
        vector<int> result;  // To store the left view nodes
        if (!root) return result;  // If the tree is empty, return an empty vector
        
        // Use a queue for level order traversal
        queue<Node*> q;
        q.push(root);
        
        while (!q.empty()) {
            int n = q.size();  // Number of nodes at the current level
            
            for (int i = 0; i < n; ++i) {
                Node* curr = q.front();
                q.pop();
                
                // The first node of each level is part of the left view
                if (i == 0) {
                    result.push_back(curr->data);
                }
                
                // Push left and right children of the current node into the queue
                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
            }
        }
        
        return result;
    }
};
